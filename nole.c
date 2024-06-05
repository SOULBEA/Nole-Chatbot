#include<stdio.h>
#include<string.h>

float add(float a, float b);
float sub(float a, float b);
float multi(float a, float b);



int main(){
    float x, y;
    printf("Hello world I am Nole. I am a real basic chatbot\n");
    printf("I can add, subtract, print table and do many other diffrent kinds of basic maths calculation\n");
    printf("I am still on a building stage. \n");

    char user_input[100];
    printf("Please enter an instruction : ");
    scanf("%s", &user_input);
    
    if(strcmp(user_input, "hi") == 0 || strcmp(user_input, "hello") == 0){
        printf("Namaste, How are you doing today");
    }

    else if(strcmp(user_input,"add") == 0 || strcmp(user_input,"addition") == 0){
        float x, y;
        printf("Enter first value:  ");
        scanf("%f", &x);
        printf("Enter second value to add: ");
        scanf("%f", &y);
        add(x, y);
    }
    else if (strcmp(user_input, "sub") == 0 || strcmp(user_input, "subtraction") == 0)      
    {
        float x, y;
        printf("Enter first value:  ");
        scanf("%f", &x);
        printf("Enter second value to add: ");
        scanf("%f", &y);
        sub(x, y);
    }
    else if(strcmp(user_input, "multi") == 0 || strcmp(user_input, "mulitply") == 0){
        printf("Enter the first value: ");
        scanf("%f", &x);
        printf("Enter the second value: ");
        scanf("%f", &y);
        multi(x, y);
    }
    
    else{
        printf("Invaild input");
    }
    return 0;
}

float add(float a, float b){
    float ans1 = a+b;
    printf("addtion of %f + %f = %f", a, b, ans1);
    return ans1;
}

float sub(float a, float b){
    float ans2 = a-b;
    printf("subtraction of %f - %f = %f", a, b, ans2);
}

float multi(float a, float b){
    float ans3 = a*b;
    printf("mulitipilcation of %f x %f = %f", a, b, ans3);
}