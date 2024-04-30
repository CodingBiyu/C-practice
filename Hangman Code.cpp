
#include <iostream>
#include <string>

using namespace std;

int main()
{

    int wrong = 0;
bool found = 0;
    string hidden("concealed");

    string answer("*********");

    char guess;

    do
    {
//    	if(wrong == 7)
//    	{
//    		cout<<"\n----------------------------"<<endl;
//    		cout<<"|   BETTER LUCK NEXT TIME!!  |"<<endl;
//    		cout<<"------------------------------"<<endl;
//    		break;
//		}
        cout << "Uncovered: >>" << answer << "<< Your guess pls: "; 
        cin >> guess;
        	  found = 0;
        for(int i = 0; i < hidden.length(); i++)
        {
        	
            if (guess == hidden[i])
             {
				  answer[i] = guess;
				  found = 1;

			}
                
               
        }
        if(!found)
        {
        	
				wrong++;
			//	cout<<"wrong 2 : "<<wrong<<endl;
//            	cout<<"You guessed wrong"<<endl;
            	cout<<"Attempts left:"<<7-wrong<<endl;
            	
            	if (wrong == 1)
{
	cout<<   " +---+\n"
    " |   |\n"
    "     |\n"
    "     |\n"
    "     |\n"
    "     |\n"
    "==========\n";
 
}
 else if(wrong == 2)
{
	cout<<    " +---+\n"
    " |   |\n"
    " O   |\n"
    "     |\n"
    "     |\n"
    "     |\n"
    "==========\n";

}
 else if(wrong == 3)
{
	cout<<    " +---+\n"
    " |   |\n"
    " O   |\n"
    " |   |\n"
    "     |\n"
    "     |\n"
    "==========\n";
 
}else if(wrong == 4)
{
	cout<<     " +---+\n"
    " |   |\n"
    " O   |\n"
    "/|   |\n"
    "     |\n"
    "     |\n"
    "==========\n";
   
}
 else if(wrong == 5)
{
	cout<<" +---+\n"
    " |   |\n"
    " O   |\n"
    "/|\  |\n"
    "     |\n"
    "     |\n"
    "==========\n";
    
}
else if(wrong == 6)
{
	cout<<  " +---+\n"
    " |   |\n"
    " O   |\n"
    "/|\  |\n"
    "/    |\n"
    "     |\n"
    "==========\n";
    
}
else if(wrong == 7)
{
	cout<<" +---+\n"
    " |   |\n"
    " O   |\n"
    "/|\  |\n"
    "/ \  |\n"
    "     |\n"
    "==========\n";

}
		}

    } while (wrong < 7);
    cout << "Game over: >>" << answer << "<<";
}
