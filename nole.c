#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
#include<unistd.h>
#include<math.h>

float add(float a);
float sub(float a);
float multi(float a);
float divide(float a);
float area_circle(float radius);
float area_sq(float side);
float area_rec(float len, float width);
float area_tri(float height, float base);
float root(float intput);

typedef struct 
{
    char *question;
    char *options[4];
    int correct_option;

} Question;

Question questions[] = {
    {"What is the capital of France?", {"A. Paris", "B. Rome", "C. London", "D. Berlin"}, 0},
    {"Who wrote 'Romeo and Juliet'?", {"A. William Shakespeare", "B. Charles Dickens", "C. Jane Austen", "D. Mark Twain"}, 0},
    {"What is the chemical symbol for water?", {"A. H2O", "B. CO2", "C. O2", "D. NaCl"}, 0},
    {"What is the tallest mammal?", {"A. Giraffe", "B. Elephant", "C. Hippopotamus", "D. Kangaroo"}, 0},
    {"What is the largest planet in our solar system?", {"A. Jupiter", "B. Saturn", "C. Mars", "D. Earth"}, 0}
};

// function to suffele the option
void suffle_option(char **option){
    srand(time(NULL));
    for(int i = 4; i>0; i--){
        int j = rand() % (i+1);
        // swaping option:
        char *temp = option[i];
        option[i] = option[j];
        option[j] = temp;
    }
}

// function to suffle questions and options:

void suffle_question(Question *question, int num_question){
    srand(time(NULL));
    for(int i = num_question - 1; i>0; i--){ // using num_quseiton -1 because in c the number starts from 0 not 1
        int j= rand() % (i+1);
        // swaping the question:
        Question temp = question[i];
        question[i] = question[j];
        question[j] = temp;

    }
    // suffling option for each question:
    for (int i = 0; i < num_question; i++){
        suffle_option(question[i].options); // this will keep track of the qusetion and the respective answer when swaping both

    }
    
    
}

void display_option(char **options){
    for(int i = 0; i<4; i++){
        printf("%s\n", options[i]);
    }
}

// writing fucntion to select random question:
Question select_question(){
    return questions[rand()% (sizeof(questions) / sizeof(questions[0]))];
}

// function to check if the answer is correct:

int check_answer(int selected_option, int correct_option){
    return selected_option == correct_option;
}

void play_game(){
    printf("Welcome to Kaun Banega Crorepati!\n");
    printf("You will be asked a series of questions. Choose the correct option to win!\n");
    int num_questions = sizeof(questions) / sizeof(questions[0]);
    suffle_question(questions, num_questions);
    // writing for loop to display question and options from the array: 
    for(int i = 0; i<num_questions; i++){
        printf("Question number %d: %s", i+1, questions[i].question); // this will collect the question from the question array till the time i is less than number of questoin
        // after this we will display option with respective to the question.
        display_option(questions[i].options);

        // trying to fetech the correct option for the respective question:
        char *original_correct_option = questions[i].options[questions[i].correct_option];
        // int suffled_correct_option = find_correct_option[]
        int find_correct_option;
    int shuffled_correct_option = find_correct_option[questions[i].options, questions[i].correct_option, original_correct_option];

        printf("Enter 0 to 3 repectively for the correct option of respective quetions\n");
        int answer;
        printf("Enter your option: ");
        scanf("%d", &answer);

        if (answer == -1){
            printf("It was fun playing with you Thank you");
            return;
        }

        if (check_answer(answer, shuffled_correct_option)){
            printf("Yes this is a correct option congratulation: ");
        }
        else{
            printf("Sorry the answer was incorrect \n\n");
            printf("The correct option was %s", original_correct_option);

        }
    }
    printf("congo you completed the game 🎉");

}

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
    else if(strcmp(user_input, "area_sq") == 0|| strcmp(user_input, "area_of_sq") == 0){
        float side;
        area_sq(side);
    }    
    else if(strcmp(user_input, "quiz") == 0){
        play_game();
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

float root(float input){
    float ans8 = pow(input, 0.5);
    printf("root of %f is %f", input, ans8);
}

float area_sq(float side){
    printf("Please enter the side of the sq: ");
    scanf("%f", &side);
    float ans9 = pow(side,2);
    // printf("area of sq = %f" ans9);
    printf("area of sq = %f", ans9);
}