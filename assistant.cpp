#include <iostream>
#include <windows.h>
#include <stdio.h>
#include <string.h>
#include <ctime> 

using namespace std;


void wishme(){
    
    time_t now = time(0);
    tm *time = localtime(&now);

    if (time-> tm_hour < 12){
        cout<< "Good Morning sir"<<endl;
        string phrase = "Good Morning sir";
        string command = "espeak \"" + phrase + "\"";
        const char *charCommand = command.c_str();
        system(charCommand);
    }

    else if (time-> tm_hour >= 12 && time->tm_hour <= 16){
        cout<< "Good Afternoon sir"<<endl;
        string phrase = "Good Afternoon sir";
        string command = "espeak \"" + phrase + "\"";
        const char *charCommand = command.c_str();
        system(charCommand);
    }
    
    else if (time-> tm_hour > 16 && time->tm_hour < 24){
        cout<< "Good Evening sir"<<endl;
        string phrase = "Good Evening sir";
        string command = "espeak \"" + phrase + "\"";
        const char *charCommand = command.c_str();
        system(charCommand);
    }
}

void datetime(){
    time_t now = time(0);
    char *dt = ctime(&now);
    cout<<"The date and time is "<<endl
        << dt <<endl;
}

int main()
{
    system("cls");

    cout<<"\t\t\t<============================================= W E L C O M E ==========================================>"<<endl;
    cout<<"\t\t\t<============================================= I'M A VIRTUAL ASSISTANT ==========================================>"<<endl;
    cout<<"\t\t\t<============================================= MY NAME IS Friday ==========================================>"<<endl;
    cout<<"\t\t\t<============================================= I'M HERE TO HELP YOU ==========================================>"<<endl<<endl;

    char password[20]; //to take password
    char ch[100]; // to take command from the user

    do
    {
        cout<<"======================="<<endl;
        cout<<"| ENTER YOUR PASSWORD |"<<endl;
        cout<<"======================="<<endl<<endl;
        string phrase = "enter your password";
        string command = "espeak \"" + phrase + "\"";
        const char *charCommand = command.c_str();
        system(charCommand);

        gets(password);

        STARTUPINFO startInfo = {0};
        PROCESS_INFORMATION processInfo = {0};

        if(strcmp(password, "Amongus")==0){
            cout<<"\n<==================================================================================================>\n\n";
            wishme();
            do{
                cout<<"\n<==================================================================================================>\n\n";
                cout<<endl<<"is there anything i can do for you sir"<<endl<<endl;

                string phrase = " is there anything i can do for you sir";
                string command = "espeak \"" + phrase + "\"";
                const char *charCommand = command.c_str();
                system(charCommand);

                cout<<"Your query ==> ";
                gets(ch);
                cout<<endl;
                cout<<" result  ==> ";

                if(strcmp(ch, "hi") == 0 || strcmp(ch, "hey") == 0 || strcmp(ch, "hello") == 0 ){
                    cout<<"Hello sir....."<<endl;
                    string phrase = "Hello sir";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                }
                
                else if(strcmp(ch, "bye") == 0 || strcmp(ch, "stop") == 0 || strcmp(ch, "exit") == 0 ){
                    cout<<"Good Bye sir, have a nice day!!!!"<<endl;
                    string phrase = "Good Bye sir, have a nice day";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    exit(0);
                }
                else if(strcmp(ch, "i love you") == 0 || strcmp(ch, "i like you") == 0 || strcmp(ch, "you are dearest to me") == 0 ){
                    cout<<"I love you two sir! you are nearest to my heart, i will always be there for you"<<endl;
                    string phrase = "I love you two sir! you are nearest to my heart, i will always be there for you";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                }
                else if(strcmp(ch, "who are you") == 0 || strcmp(ch, "tell me about yourself") == 0 || strcmp(ch, "about") == 0 ){
                    cout<<"I'm Friday.A virtual assistant created by you !!!"<<endl;
                    string phrase = "I am Friday. A virtual assistant created by you";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                }

                else if(strcmp(ch, "how are you") == 0 || strcmp(ch, "whatsup") == 0 || strcmp(ch, "how is your day") == 0 ){
                    cout<<"I'm good sir, tell me how can i help you.."<<endl;
                    string phrase = "I'm good sir, tell me how can i help you";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                }

                else if(strcmp(ch, "time") == 0 || strcmp(ch, "date") == 0){
                    // make function to show date and time
                    datetime();
                }

                else if(strcmp(ch, "open notepad") == 0){
                    cout<<"openining notepad....."<<endl;
                    string phrase = "opening notepad";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    CreateProcess(TEXT("C:\\Windows\\notepad.exe"), NULL, NULL, NULL, FALSE, NULL, NULL, NULL, &startInfo, &processInfo);
                }
                else if(strcmp(ch, "open vs code") == 0){
                    cout<<"openining visual studio code...."<<endl;
                    string phrase = "opening visual studio code....";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    CreateProcess(TEXT("C:\\Users\\moksh\\AppData\\Local\\Programs\\Microsoft VS Code\\Code.exe"), NULL, NULL, NULL, FALSE, NULL, NULL, NULL, &startInfo, &processInfo);
                    
                }
                else if(strcmp(ch, "open chrome") == 0){
                    cout<<"openining google chrome...."<<endl;
                    string phrase = "opening google chrome...";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    CreateProcess(TEXT("C:\\Program Files\\Google\\Chrome\\Application\\chrome.exe"), NULL, NULL, NULL, FALSE, NULL, NULL, NULL, &startInfo, &processInfo);
                    
                }
                 else if(strcmp(ch, "open word") == 0){
                    cout<<"openining micro soft word..."<<endl;
                    string phrase = "opening microsoft word.....";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    CreateProcess(TEXT("C:\\Program Files\\Microsoft Office\\root\\Office16\\WINWORD.EXE"), NULL, NULL, NULL, FALSE, NULL, NULL, NULL, &startInfo, &processInfo);
                    
                }
                else if(strcmp(ch, "open excel") == 0){
                    cout<<"openining micro soft excel..."<<endl;
                    string phrase = "opening microsoft excel.....";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    CreateProcess(TEXT("C:\\Program Files\\Microsoft Office\\root\\Office16\\EXCEL.EXE"), NULL, NULL, NULL, FALSE, NULL, NULL, NULL, &startInfo, &processInfo);
                    
                }
                else if(strcmp(ch, "open spotify") == 0){
                    cout<<"openining spotify.."<<endl;
                    string phrase = "opening spotify....";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    CreateProcess(TEXT("C:\\Users\\moksh\\AppData\\Roaming\\Spotify\\Spotify.exe"), NULL, NULL, NULL, FALSE, NULL, NULL, NULL, &startInfo, &processInfo);
                    
                }

                else if(strcmp(ch, "open google") == 0){
                    cout<<"openining google....."<<endl;
                    string phrase = "opening google";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    system("start https://www.google.com");
                }

                else if(strcmp(ch, "open youtube") == 0){
                    cout<<"openining YouTube....."<<endl;
                    string phrase = "opening youtube";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    system("start https://www.youtube.com");
                }

                else if(strcmp(ch, "open instagram") == 0){
                    cout<<"openining instagram....."<<endl;
                    string phrase = "opening instagram";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    system("start https://www.instagram.com");
                }
                else if(strcmp(ch, "start peaky e1") == 0){
                    cout<<"starting peaky blinders episode1"<<endl;
                    string phrase = "starting peaky blinders episode1";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    ShellExecute(NULL,"open","C:\\Users\\moksh\\Desktop\\peaky blinders\\peaky blinders s1\\Peaky.Blinders.S01E01.720p.BluRay.x264.400MB-Pahe.in.mkv",NULL,NULL,SW_NORMAL);
                }
                 else if(strcmp(ch, "weather") == 0|| strcmp(ch,"what about weather") ==0){
                    cout<<" weather foerecast on your screen sir ..."<<endl;
                    string phrase = " weather foerecast on your screen sir ....";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    system("start https://weather.com/en-IN/weather/today/l/28.62,77.04?par=google");
                }
                

                else{
                    cout<<"Sorry could not understand your query please ty again !!!"<<endl;
                    string phrase = "Sorry could not understand your query please ty again";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                }


            }while(1);
        }
        else
                {
                    system("cls");

                    cout << "\t\t\t<============================= W E L C O M E=============================>" << endl;
                    cout << "\t\t\t<============================= I'M VIRTUAL ASSISTANT =============================>" << endl;
                    cout << "\t\t\t<============================= MY NAME IS Friday =============================>" << endl;
                    cout << "\t\t\t<============================= I'M HERE TO HELP YOU AND MAKE YOUR LIFE EASY =============================>" << endl
                         << endl;

                    cout << "======================" << endl;
                    cout << "X Incorrect Password X" << endl;
                    cout << "======================" << endl
                         << endl;
                    string phrase = "Incorrect Password, Please enter correct password";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                }
    } while (1);
    

    return 0;
}