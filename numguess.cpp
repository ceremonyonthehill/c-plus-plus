#include<iostream>
#include<ctime>

int main(){
    int num;
    int guess;
    int tries;
    char startG;
    char startA;
    

        do{
             std::cout << "*************************************************************\n";
             std::cout << "Welcome to number guessing game! ";
             std::cout << "You have 10 tries to guess the number between 1 and 100\n";
             std::cout << "Ready? Press Y/N\n";
             std::cin >> startG;
            if(startG == 'Y' || startG == 'y'){
                srand(time(NULL));
                num = (rand() % 100) + 1;

                while(tries <= 10){
                    std::cout << "Enter your guess ";
                    std::cin >> guess;
                    if(guess > num){
                        std::cout << "Number is too high\n";
                        
                    }else if(guess < num){
                        std::cout<< "Number is too low\n";
                    }else{
                        std::cout<<"Congratulation, you win in !\n";
                        break;
                    }
                    tries++;
                }
                std::cout << "Do you want to play again ? Y/N ";
                std::cin >> startA;
               

            }else
            {
                std::cout << "Maybe next time...";
            }
            
        
        }while(startA == 'Y' || startA == 'y');
        std::cout << "Returning to main menu...\n";
    
        return 0;
        //add if other than y/n, retry

}