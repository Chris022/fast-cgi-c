#include <stdio.h>
#include <stdlib.h>
#include <string.h>


//The method of the call
char *method;

//The query data
char *query;

//The request data
char *content_length;
char *body;


int main(){
    printf("Content-type: text/html\n\n");


    //read the method of the request
    method = getenv("REQUEST_METHOD");
    //read the query data
    query = getenv("QUERY_STRING");

    if((content_length = getenv("CONTENT_LENGTH")) != NULL){
        //allocate the lenght of the body
        body = malloc(sizeof(char)*atoi(content_length));
        //read body
        for(int c = 0; c < atoi(content_length); c++){
            *(body+c) = fgetc(stdin);
        }
    }

    printf(method);
    printf(query);
    printf(body);
}