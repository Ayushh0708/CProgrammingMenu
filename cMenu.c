#include <stdio.h>
#include <ctype.h>


void intro(){                                                       //Introduction
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
    printf("\n\n#include <stdio.h> is a header file library that lets us work with input and output functions, such as printf() (used in line 4). Header files add functionality to C programs.\n\n\n");
    printf("\033[0m");



    printf("\033[1m");
    printf("DataTypes:\n");
    printf("\033[0m");
    
    printf("1. int   :-\t It stores the whole number and have a size of \"2\" or \"4\" bytes.\n\t\t For ex.- 1\n");
    printf("2. char  :-\t It stores one character/number(as character)/letter/ or ASCII value.\n\t\t For ex.- \'a\' , \'A\' , \'1\'\n");
    printf("3. float :-\t It stores the fraction values, containing one or more decimals, sufficient for storing 6-7 decimals digits.\n\t\t For ex.- 1.09, 0.456672\n");
    printf("4. double:-\t It stores the fraction values, containing one or more decimals, suffiecient for storing 15 decimal digits.\n\t\t For ex.- 23.9987487323\n");

}


void ifStatement(){                                                //If Statement example
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
    char continueOpt='n';
    printf("Welcome to the C Programing Restro\n\n");

    int indexOpt=0;
    do                                                             //Index And Options
    {
        printf("1: C Introduction\n2: if and else-if\n3: Switch\n4: Loops\n5: Break/Continue\n6: Functions\n");           //Option Menu
        printf("What would you like to learn?(Provide S.No.)\n\n");

        scanf("%d", &inputMainTopic);

        while (getchar() != '\n');

        if(inputMainTopic <= 6 && inputMainTopic >= 1)
        {
            switch (inputMainTopic)
            {
            case 1:
                intro();
                break;

            case 2:
                ifStatement();
                break;

            default:
                break;
            }

            indexOpt=1;
            int a=0;
            do{                                     //Asking for continue study
        printf("\n\nWants to continue learning? (y/n): ");
        scanf(" %c",&continueOpt);

        if(isdigit(continueOpt)){
            printf("Please enter (Y/y) for \"Yes\" or (N/n) for \"No\"");}

        else if(isalpha(continueOpt)) {
                continueOpt=tolower(continueOpt);
                if(continueOpt=='y' || continueOpt=='n'){
                    a=1;
                }else {
                    printf("Please enter (Y/y) for \"Yes\" or (N/n) for \"No\"");
                }
        }else{
            printf("Please enter the value from the desired options");
        }
           
            }while(a==0);
            }
       
        else
        {   printf("\033[1m");
            printf("\nPlease enter the valid option.\n\n");
            printf("\033[0m");
        }

        

        
    }while(continueOpt=='y' || indexOpt==0);

    return 0;
}
