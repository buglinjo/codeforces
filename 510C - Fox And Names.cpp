#include <stdio.h>
#include <iostream>
#include <string.h>
#include <stack>

using namespace std;

enum{
    white=0,
    grey,
    black
}color;

int first(int mat[26][26],int v){
    for(int i = 0;i<26;i++)if(mat[v][i]==1) return i;
    return 26;
}

int next(int mat[26][26],int v,int w){
    for(int i = w+1;i<26;i++)if(mat[v][i]==1) return i;
    return 26;
}

void TPSort(int mat[26][26],int* visit,int v,int* valido,stack<int> &s){
    visit[v] = grey;
    int w = first(mat,v);
    while(w<26){
        if(visit[w]==white){
            TPSort(mat,visit,w,valido,s);
        }
        w = next(mat,v,w);
    }
    if(valido[v]==1) s.push(v);
}

void fullvisitTPS(int mat[26][26],int* visit,int* valido,stack<int> &s){
    for(int i = 0;i<26;i++){
        if(visit[i]==0&&valido[i]==1){
            TPSort(mat,visit,i,valido,s);
        }
    }
}

void DFS(int mat[26][26],int* visit,int v,int* valido,stack<int> &s){
    visit[v] = grey;
    int w = first(mat,v);
    while(w<26){
        if(visit[w]==white){
            DFS(mat,visit,w,valido,s);
        }
        else if(visit[w]==grey){
           
           printf("Impossible\n");
            exit(0);
       }
        w = next(mat,v,w);
    }
    visit[v] = black;
}

void fullvisitDFS(int mat[26][26],int* visit,int* valido,stack<int> &s){
    for(int i = 0;i<26;i++){
        if(visit[i]==0&&valido[i]==1){
            DFS(mat,visit,i,valido,s);
        }
    }
}


int main()
{  
    int newOrder[26][26]={0};
    int newOrderVisit[26]={0};
    int qtd;
    int visit[26]  = {0};
    stack<int> s;
    char aux[200];
    char input[200];
    scanf("%d",&qtd);
    scanf("%s",aux);
    qtd--;
    while(qtd--){
        scanf("%s",input);
        int k=-1;
        for(int i = 0;input[i]!='\0'&&aux[i]!='\0';i++){
            if(input[i]!=aux[i]){
                k = i;
                break;
            }
        }
        if(k>-1){
            newOrder[aux[k]-'a'][input[k]-'a'] = 1;
            newOrderVisit[aux[k]-'a'] = 1;
            newOrderVisit[input[k]-'a'] = 1;
        }
        if(strlen(aux)>strlen(input)&&k==-1){
            printf("Impossible\n");
            return 0;
        }
        strcpy(aux,input);
    }
    fullvisitDFS(newOrder,visit,newOrderVisit,s);
    
    for(int i = 0;i<26;i++)visit[i]  = 0;
    
    fullvisitTPS(newOrder,visit,newOrderVisit,s);
    
    for(int i = 0;i<26;i++){
        if(newOrderVisit[i] == 0)printf("%c",i+'a');
        else{
            while(!s.empty()&&s.top()<=(i)){
                char help = s.top()+'a';
                printf("%c",help);
                s.pop();
            }
        }
    }

    return 0;
}
