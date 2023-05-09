#include<iostream>
using namespace std;
int s[200][200]={
    {100001,100002,100003,100004},
    {100005,100006,100007,100004},
    {100008,100008,100009,100004},
    {100006,100001,100000,100004},
    {100007,100006,100006,100006},
    {100006,100006,100006,100006},
    {100004,100004,100004,100004},
};
/*
wstring s[200][200]={
    {L"高等数学",L"计算机导论",L"思想道德与法治",L"卷"},
    {L"大学体育",L"摸鱼",L"大学英语",L"卷"},
    {L"C语言程序与设计",L"C语言程序与设计",L"军事理论",L"卷"},
    {L"摸鱼",L"高等数学",L"线性代数",L"卷"},
    {L"大学英语",L"摸鱼",L"摸鱼",L"摸鱼"},
    {L"摸鱼",L"摸鱼",L"摸鱼",L"摸鱼"},
    {L"卷",L"卷",L"卷",L"卷"},
};
*/
/*
string s[200][200]={
    {u8"高等数学",u8"计算机导论",u8"思想道德与法治",u8"卷"},
    {u8"大学体育",u8"摸鱼",u8"大学英语",u8"卷"},
    {u8"C语言程序与设计",u8"C语言程序与设计",u8"军事理论",u8"卷"},
    {u8"摸鱼",u8"高等数学",u8"线性代数",u8"卷"},
    {u8"大学英语",u8"摸鱼",u8"摸鱼",u8"摸鱼"},
    {u8"摸鱼",u8"摸鱼",u8"摸鱼",u8"摸鱼"},
    {u8"卷",u8"卷",u8"卷",u8"卷"},
};
*/
int main(){
    freopen("output.txt","w",stdout);
    cout<<"#第一部分：日常的学习"<<endl;
    cout<<"for day=1 to 100"<<endl;
    cout<<"    switch(day)"<<endl;
    for(int i(1);i<=100;i++){
        printf(R"(                case %d:
                    for time=6*60+30 to 23*60
                        if time=6*60+50 then my.bed:=my.bed-my.body
                        if time=7*60+20 then my.stomach:=my.stomach+food
                        if time=8*60+20 then move(my.body,%d)
                        if time=9*60+50 then move(my.body,%d)
                        if time=11*60+50 then my.stomach:=my.stomach+food
                        if time=14*60+0 then move(my.body,%d)
                        if time=19*60+0 then move(my.body,%d)
                        if time=21*60+0 then move(my.body,宿舍)
                            if homework<my.pressure_range then print("摸鱼的时间到了呢...")
                            else print(借我抄抄,plz!!!)
                        if time=23*60+30 then my.bed:=my.bed+my.body
                    end
                    break
)",
        i,
        s[(i-1)%7][0],
        s[(i-1)%7][1],
        s[(i-1)%7][2],
        s[(i-1)%7][3]
        );
    }
    cout<<"    end"<<endl;
    cout<<"end"<<endl;
    cout<<"#第二部分：考试周"<<endl;
    printf(R"(      n:=get(obj_number)
        for i=1 to n
            move(my.body,get(exam_room))
            while(my.exam_papers>0)
                if(exam_time-now_time<30)
                    action::answer_questions()
                else
                    action::sleep()
                    my.sleep_voice++
            end
            action::play_phone()
        end
)");
    cout<<"#第三部分：出分"<<endl;
    printf(R"(      my.mind:=my.mind+my.score
        if(my.score>=60)
            print("大家向我看齐向我看齐，看我看我，我及格了，你们也成天摸鱼就没有及格balabala...")
        else
            move(my.body,get(teacher_office))
            while(1)
                print("老师多给我几分罢，plz!!!")
                if(my.heathy<=0||my.score>=60)
                    break
            end
)");
    cout<<"#第四部分：放假"<<endl;
    cout<<"return home"<<endl;
    return 0;
}