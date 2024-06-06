#include<stdio.h>
#include<string.h>
#include<math.h>

float add(float a);
float sub(float a);
float multi(float a);
float divide(float a);
float area_circle(float radius);
float area_rec(float len, float width);
float area_tri(float height, float base);


int main(){
    
    printf("============== Hello I am Nole. ==============\n");
    printf("I can add, subtract, multiply, or divide there are more feature will be coming up very soon\n");
    printf("Anyway How can I help you today: ");
    char user_input[100];
    scanf("%s", user_input);
    if(strcmp(user_input, "Hi") == 0 || strcmp(user_input, "hi") == 0 || strcmp(user_input, "hello") == 0 || strcmp(user_input, "Hello") == 0){
        printf("Namaste, How are you doing today.");
    }

    else if(strcmp(user_input, "add") == 0 || strcmp(user_input, "addtion") == 0){
        float x;
        add(x);
    }

    else if(strcmp(user_input, "sub") == 0 || strcmp(user_input, "subtraction") == 0){
        float x;
        sub(x);
    }
    else if(strcmp(user_input, "multiplication") == 0 || strcmp(user_input, "multiply") == 0){
        float x;
        multi(x);
    }
    else if(strcmp(user_input, "divide") == 0 || strcmp(user_input, "division") == 0){
        float x;
        divide(x);
    }
    else if (strcmp(user_input, "circle") == 0|| strcmp(user_input, "area_of_cirlce") == 0)
    {
        float radius1;
        printf("Please enter the value of radius: ");
        scanf("%f", &radius1);
        area_circle(radius1);
    }
    else if (strcmp(user_input, "rectangle") == 0 || strcmp(user_input, "area_of_rectangle") == 0 || strcmp(user_input, "rec") ==  0)
    {
        float len, width;
        area_rec(len, width);
    }

    else if(strcmp(user_input, "tri") == 0 || strcmp(user_input, "area_of_triangle") == 0){
        float height, base;
        area_tri(height, base);
    }
    
    
    return 0;
}

float add(float a){
    int n;
    float ans1 = 0;
    printf("please enter the total number you want to add: ");
    scanf("%d", &n);
    float arr[n];
    for (int i = 0; i<n; i++){
        printf("Please enter %d. number: ", i+1);
        scanf("%f", &arr[i]);
        ans1 = ans1 + arr[i];
    }
    // float ans1 = a+b;
    printf("Answer = %f", ans1);
}

float sub(float a){
    int num;
    float ans2 = 0;
    printf("please enter the total number you want to subract: ");
    scanf("%d", &num);
    float arr[num];
    for(int i = 0; i<num; i++){
        printf("Please enter the %d. number: ", i+1);
        scanf("%f", &arr[i]);
        ans2 -= arr[i];

    }
    printf("Answer = %f", ans2);
    // float ans2 = a-b;
    // printf("subtraction of %f - %f = %f", a, b, ans2);

}

float multi(float a){
    int num;
    float ans3 = 1;
    printf("please enter the total number you want to mulitiply: ");
    scanf("%d", &num);
    float arr[num];
    for(int i = 0;i<num;i++){
        printf("Please enter %d. number: ", i+1);
        scanf("%f", &arr[i]);
        ans3 *= arr[i];

    }
    printf("Answer = %f", ans3);
}

float divide(float a){
    int num;
    float ans4 = 0;
    printf("please enter the total number you want to divide: ");
    scanf("%d", &num);
    float arr[num];
    for(int i = 0;i<num; i++){
        printf("please enter the %d. number: ", i+1);
        scanf("%f", &arr[i]);
        float ans4 = ans4/arr[i];
    }
    printf("Answer = %f", ans4);
}

float area_circle(float radius){
    float ans5 = 3.1415*radius*radius;
    printf("area of circle = %f", ans5);
}

float area_rec(float len, float width){
    printf("Please enter the lenth of the rectangle : ");
    scanf("%f", &len);
    printf("Please enter the width of the rectangle : ");
    scanf("%f", &width);
    float ans6 = len*width;
    printf("area of rectangle = %f", ans6);
}

float area_tri(float height, float base){
    float ans7 = 0.5*height*base;
    printf("area of triangle = %f", ans7);

}