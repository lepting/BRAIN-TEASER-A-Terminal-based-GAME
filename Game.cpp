#include<bits/stdc++.h>
#include<iomanip>
#include<stdlib.h>
#include<unistd.h>


int countdown;

using namespace std;


//Game Engine is  here.

int left(int level_top, int level_bottom){

    int rand1;

    rand1=rand()%level_top+level_bottom;

    return rand1;

}

int right(int level_top, int level_bottom){

    int rand2;

    rand2=rand()%level_top+level_bottom;

    return rand2;

}

int sign(void){

    int rand3;

    rand3=rand()%2+1;

    return rand3;
}


void promt(int score,int total){
    sleep(1);
    cout<<setfill(' ')<<setw(12)<<"G ";
    sleep(.1);
    cout<<"A ";
    sleep(.1);
    cout<<"M ";
    sleep(.1);
    cout<<"E ";
    sleep(.1);
    cout<<"  O ";
    sleep(.1);
    cout<<"V ";
    sleep(.1);
    cout<<"E ";
    sleep(.1);
    cout<<"R ";
    cout<<"\n\n\n\n";
    sleep(1);
    cout<<setfill(' ')<<setw(21)<<"       CA  :  "<<total<<"\n\n";
    sleep(1);
    cout<<setfill(' ')<<setw(26)<<"  SCORE       :       "<<score<<"\n\n";
    sleep(1);


}

void display(int score, int total){

    promt(score, total);
}



int main(){


    srand(time(0));
    int scape, current_score, score, algo, total, check_level, level, l, r, s, check, user_answer, increse, level_top, level_bottom;
    cout<<"Press any key to start: \n";

    while(getchar()){
            score=0;
            algo=10;
            increse=0;
            level=1;
            check_level=0;
            check=0;
            level_top=10;
            level_bottom=1;
            total=0;

            while(true){


                if(check_level%5==0){
                        system("clear");
                        if(check_level) cout<<"Score : "<<score<<"\n\n";
                        sleep(1);
                        system("clear");
                        cout<<"Level : "<<level<<"\n\n";
                        level++;

                }
                 if(increse%5==0&&increse){
                    level_top+=10;
                    level_bottom+=10;
                    algo+=10;


                }

                check_level++;

                l=left(level_top, level_bottom);
                r=right(level_top, level_bottom);
                s=sign();
                sleep(1);
                if(s==1){
                        current_score=l+r;
                        cout<<"\n"<<l<<" + "<<r<<" = ?\n\n";

                }
                else{
                    current_score=l-r;
                    cout<<"\n"<<l<<" - "<<r<<" = ?\n\n";
                }

                cin>>user_answer;
                //timer();
                sleep(1);





                if(current_score!=user_answer){
                        cout<<"\a";
                        check++;

                }
                else{
                        total++;
                        score+=algo;
                }


                if(check==2){
                        system("clear");
                        display(score,total);
                        break;
                }





                increse++;




            }

            cout<<"\n\nTry again: 1\nExit: 0\n\n";

            cin>>scape;
            if(scape==0) break;
            else if(scape==1){
                continue;
            }

    }

}

