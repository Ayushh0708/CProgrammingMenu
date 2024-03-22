#include <stdio.h>
#include <ctype.h>


void intro(){
    printf("\033[1m");
    printf("\033[2m");
    printf("\nIntroduction\n");
    printf("\033[0m");
    printf("1: C is a general-purpose programming language created by Dennis Ritchie at the Bell Laboratories in 1972.\n2: It is a very popular language, despite being old. The main reason for its popularity is because it is a fundamental language in the field of computer science.\n3: C is strongly associated with UNIX, as it was developed to write the UNIX operating system.\n\n");

    printf("\033[1m");
    printf("\033[2m");
    printf("\nC Code Syntax\n");
    printf("\033[0m");
    printf("#include <stdio.h>\n\nint main(){\n\tprintf(\"Hello World\");\nreturn 0;\n}");

    printf("\033[1m");
    printf("\n\n#include <stdio.h> is a header file library that lets us work with input and output functions, such as printf() (used in line 4). Header files add functionality to C programs.\n");
    printf("\033[0m");
}


void ifStatement(){
    printf("\033[1m");
    printf("\033[2m");
    printf("If command(Syntax):");
    printf("\033[0m");
    printf("\n\nif(condition){\n\t#code......\n}else{\n\t#code....}\n\n");

    printf("\033[1m");
    printf("\n\nFor example: Age eligible code:");
    printf("\033[0m");
    printf("\n\n#include <stdio.h>\n\nint main() {\n\nint age;\n\nprintf(\"Enter your age: \");\nscanf(\"%%d\", &age);\n\nif (age >= 18) {\n\tprintf(\"Your age is 18+.\");\n\tprintf(\"Eligible to vote.\");\n} else {\n\tprintf(\"Your age is not yet 18.\");\n\tprintf(\"Not eligible to vote.\");\n}\nreturn 0;\n}\n\n\n");
    



    printf("\033[1m");
    printf("\033[2m");
    printf("else-if command(Syntax):");
    printf("\033[0m");
    printf("\n\nif(condition){\n\t#code......\n}else if{\n\t#code....\n}else{\n\tcode....\n}\n\n");

    printf("\033[1m");
    printf("\n\nFor example: Age eligible code:");
    printf("\033[0m");
    printf("\n\nint main() {\nint age;\n\nprintf(\"Enter your age: \");\nscanf(\"%%d\", &age);\n\nif (age > 18) {\n\tprintf(\"You are above 18 years old.\");\n} else if (age < 18) {\n\tprintf(\"You are below 18 years old.\");\n} else {\n\tprintf(\"You are exactly 18 years old.\");\n}\n\nreturn 0;\n}");
            
}

int main(int argc, char const *argv[])
{
    int inputMainTopic;
    char continueOpt;
    printf("Welcome to the C Programing Restro\n\n");

    do
    {
        printf("1: C Introduction\n2: if and else-if\n3: Loops\n4: Functions\n");
        printf("What would you like to learn?(Provide S.No.)\n");

        scanf("%d", &inputMainTopic);

        if (inputMainTopic > 4 && inputMainTopic < 1)
        {
            printf("Please enter the valid option.");
        }
        else
        {
            switch (inputMainTopic)
            {
            case 1:
                intro();
                
                break;

            case 2:
                ifStatement();
            default:
                break;
            }
        }

        
        printf("\n\nWants to continue learning? (y/n): ");
        scanf(" %c",&continueOpt);
        continueOpt=tolower(continueOpt);
    }while(continueOpt=='y');

    return 0;
}
