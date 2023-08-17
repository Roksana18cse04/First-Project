#include<iostream>
#include<windows.h>
#include<graphics.h>
#include<bits/stdc++.h>
#include<math.h>
#include<string>
using namespace std;
void Button_Display();

class Field
{
public:
    int left, top, right, bottom, bgColor;
    char *title;
    Field()
    {
        bgColor = WHITE;
    }
    Field(int left, int top, int right, int bottom, int bgColor, char* title)
    {
        visible(left, top, right, bottom, bgColor, title);
    }
    void visible(int left, int top, int right, int bottom, int bgColor, char* title)
    {
        this -> left = left;
        this -> top = top;
        this -> right = right;
        this -> bottom = bottom;
        this -> bgColor = bgColor;
        this -> title = title;
        setcolor(BLACK);
        setfillstyle(SOLID_FILL, bgColor);
        bar(left, top, right, bottom);
        rectangle(left, top, right, bottom);
        setcolor(WHITE);
        setbkcolor(bgColor);
        outtextxy((left+right)/2-textwidth(title)/2, (bottom+top)/2-textheight("A")/2, title);
    }
    bool cursor()
    {
        POINT p;
        GetCursorPos(&p);
        ScreenToClient(GetForegroundWindow(), &p);
        if(p.x >= left && p.x<=right && p.y>=top && p.y<=bottom) return true;
        return false;
    }
};

class Button : public Field
{
private:
    bool flag;
public:
    Button() {}
    Button(int left, int top, int right, int bottom, int bgColor, char* title)
        :Field(left, top, right, bottom, bgColor, title)
    {
        flag = false;
    }
    void hover(int color)
    {
        if(cursor() && !flag)
            new Field(left, top, right, bottom, color, title), flag = true;
        else if(!cursor() && flag)
            new Field(left, top, right, bottom, bgColor, title), flag = false;
    }

};
void Input_Dispaly(){
		rectangle(60,35,350,90 );
		setfillstyle(1,LIGHTGRAY);

		floodfill(66,36,15);

}


long long xx=70;
char equation[100];
int equation_idx = 0;
void expression(char ex[])
{
	setbkcolor(LIGHTGRAY);
	setcolor(BLACK);
	outtextxy(xx,38,ex);
	xx+=textwidth(ex);
	for(int i=0;ex[i]!='\0';i++){
		equation[equation_idx++]=ex[i];

	}
	equation[equation_idx]='\0';

}

void SIn(char s[]){

	int len=sizeof(s);
	double degree=stod(s);
	const double PI = 3.141592654;
	double radian = degree * (PI / 180.0);
	double result;

	result=sin(radian);
	char c[len];
	int k=320;
	sprintf(c,"%.3lf",result);
	int ans_size = len;
	k=k-ans_size*8;
	outtextxy(k,70,c);

}
void COs(char s[]){

	int len=sizeof(s);
	double degree=stod(s);
	const double PI = 3.141592654;
	double radian = degree * (PI / 180.0);
	double result;

	result=cos(radian);
	char c[len];
	sprintf(c,"%.3lf",result);
	int ans_size = len;
	int k=320;
	k=k-ans_size*8;
	outtextxy(k,70,c);

}
void TAn(char s[]){

	int len=sizeof(s);
	double degree=stod(s);
	const double PI = 3.141592654;
	double radian = degree * (PI / 180.0);
	double result;

	result=tan(radian);
	char c[len];
	sprintf(c,"%.3lf",result);
	int ans_size = len;
	int k=320;
	k=k-ans_size*8;
	outtextxy(k,70,c);

}
void Sin_in(char s[]){

	int len=sizeof(s);
	double radian=stod(s);
	const double PI = 3.141592654;
	double result=asin(radian);
	double degree =  result* ( 180.0/PI);


	char c[len];
	sprintf(c,"%.3lf",degree);
	int ans_size = len;
	int k=320;
	k=k-ans_size*8;
	outtextxy(k,70,c);

}
void Cos_in(char s[]){
	int len=sizeof(s);
	double degree=stod(s);
	const double PI = 3.141592654;
	double result=acos(degree)* (180.0/PI);
	char c[len];
	sprintf(c,"%.3lf",result);
	int ans_size = len;
	int k=320;
	k=k-ans_size*8;
	outtextxy(k,70,c);

}
void Tan_in(char s[]){
	int len=sizeof(s);
	double degree=stod(s);
	const double PI = 3.141592654;
	double result=atan(degree)* (180.0/PI);
	char c[len];
	sprintf(c,"%.3lf",result);
	int ans_size = len;
	int k=320;
	k=k-ans_size*8;
	outtextxy(k,70,c);

}
void LOg(char s[]){
	int len=sizeof(s);
	double d=stod(s);
	double result=log10(d);
	char c[len];
	sprintf(c,"%.3lf",result);
	int ans_size = len;
	int k=320;
	k=k-ans_size*8;
	outtextxy(k,70,c);
}
int fac(int num){
	if(num){return (num*fac(num-1));}
	else return 1;
}
void FAC(char s[]){
	int len=sizeof(s);
	int n=stoi(s);
	int result = fac(n);
	char c[len];
	sprintf(c,"%d",result);
	int ans_size = len;
	int k=320;
	k=k-ans_size*8;
	outtextxy(k,70,c);

}

void Root(char s[]){
	int len=sizeof(s);
	long double d=stod(s);
	double result=sqrt(d);
	char c[len];
	sprintf(c,"%.3lf",result);
	int ans_size = len;
	int k=320;
	k=k-ans_size*8;
	outtextxy(k,70,c);
}

void QRoot(char s[]){
	int len=sizeof(s);
	double d=stod(s);
	double result=cbrt(d);
	char c[len];

	sprintf(c,"%.3lf",result);
	int ans_size = len;
	int k=320;
	k=k-ans_size*8;
	outtextxy(k,70,c);
}
void Pi(char s[]){
	int len=sizeof(s);
	double p=3.141592654;
	char c[len];
	int ans_size = len;
	int k=320;
	k=k-ans_size*8;
	sprintf(c,"%lf",p);
	outtextxy(k,70,c);
}
void E(char s[]){
	int len=sizeof(s);
	double p=2.718281285;
	char c[len];
	int ans_size = len;
	int k=320;
	k=k-ans_size*8;
	sprintf(c,"%lf",p);
	outtextxy(k,70,c);
}
void DEc(char s[]){
	setbkcolor(LIGHTGRAY);
	setcolor(BLACK);
	int len=sizeof(s);
	long long num=stoi(s);
	long long num1;
	num1=num;
	int k=320;
	int ans_size=0;
	while(num1!=0)
	{
		ans_size++;
		num1/=10;
	}
    char buffer[16] = {0};
    itoa(num, buffer, 10);
    k=k-ans_size*8;
    outtextxy(k,73,buffer);
    outtextxy(320,55,"DEC");
}

int Dec_Hex(char s[]){
	setbkcolor(LIGHTGRAY);
	setcolor(BLACK);
	int len=sizeof(s);
	int i;
	int temp;
	string hex;
	long long  totalDecimal;
	totalDecimal=stoi(s);
	for (i = 0; totalDecimal != 0; i++)
	{
		temp = totalDecimal % 16;

		if (temp >= 10)
		{
			hex += temp + 55;
		}
		else
		{
			hex += temp + 48;
		}
		totalDecimal = totalDecimal / 16;
	}
	reverse(hex.begin(), hex.end());
	int n=hex.length();
	char c[n + 1];
	strcpy(c, hex.c_str());
	for(int i = 0; i < n; i++){c[i];}

	int k=320;

    int ans_size = hex.size();
    k=k-ans_size*8;
    outtextxy(k,70,c);
    outtextxy(320,55,"HEX");
}
int Dec_Bin(char s[]){
	setbkcolor(LIGHTGRAY);
	setcolor(BLACK);
	int len=sizeof(s);
	int i;
	int temp;
	string bin;
	long long  totalDecimal;
	totalDecimal=stoi(s);
	if(totalDecimal==0)bin+=48;
	for (i = 0; totalDecimal != 0; i++)
	{
		temp = totalDecimal % 2;
		bin += temp + 48;

		totalDecimal = totalDecimal / 2;
	}
    reverse(bin.begin(), bin.end());
	int k=320;
    int n=bin.length();
    char c[n + 1];
    strcpy(c, bin.c_str());

    int ans_size = bin.size();
    k=k-ans_size*8;
    outtextxy(k,70,c);
    outtextxy(320,55,"BIN");
}
int Dec_Oct(char s[]){
	setbkcolor(LIGHTGRAY);
	setcolor(BLACK);
	int len=sizeof(s);
	int i;
	int temp;
	string oct;
	long long  totalDecimal;
	totalDecimal=stoi(s);
	//cout<<totalDecimal;
	if(totalDecimal==0)oct+=48;
	for (i = 0; totalDecimal != 0; i++)
	{
		temp = totalDecimal % 8;
		oct += temp + 48;

		totalDecimal = totalDecimal /8;
	}
    reverse(oct.begin(), oct.end());
	int k=320;
    int n=oct.length();
    char c[n + 1];
    strcpy(c, oct.c_str());

    int ans_size = oct.size();
    k=k-ans_size*8;
    outtextxy(k,70,c);
    outtextxy(340,55,"OCT");
}
int precedence(char op){
	if(op == '+'||op == '-')
	return 1;
	if(op == '*'||op == '/')
	return 2;
	if(op=='^') return 3;
	return -1;
}
double applyOp(int a, int b, char op){
	switch(op){
		case '+': return a + b;
		case '-': return a - b;
		case '*': return a * b;
		case '/': return (double)a / b;
		case '^': {
			int x = (double)(pow(a,b) + 0.5);
			cout<<x<<endl;
			return x;
		}
	}
}
double evaluate(){
	int i;

	stack <double> values;
	stack <char> ops;

	for(i = 0; i < strlen(equation); i++){
		if(equation[i] == ' ')
			continue;

		else if(isdigit(equation[i] )){
			int val = 0;
			while(i < strlen(equation) && isdigit(equation[i]))
			{
				val = (val*10) + (equation[i]-'0');
				i++;
			}

			values.push(val);
			i--;
		}

		else
		{
			while(!ops.empty() && precedence(ops.top())
								>= precedence(equation[i])){
				int val2 = values.top();
				values.pop();

				int val1 = values.top();
				values.pop();

				char op = ops.top();
				ops.pop();

				values.push(applyOp(val1, val2, op));

			}
			ops.push(equation[i]);

		}
	}
	while(!ops.empty()){

		int val2 = values.top();
		values.pop();

		int val1 = values.top();
		values.pop();

		char op = ops.top();
		ops.pop();
		values.push(applyOp(val1, val2, op));
	}
	return values.top();

}
//modified

void Ac()
{
	Input_Dispaly();
	equation_idx = 0;
	equation[equation_idx]='\0';
	xx=70;
}
void Eql()
{
	setbkcolor(LIGHTGRAY);
	setcolor(BLACK);
    char substr1[10],substr2[10];
    int c1=0,c2=0;
    for(int i=0;equation[i]!='\0';i++){
		if(isdigit(equation[i])|| equation[i]=='.'){
			substr2[c2++]=equation[i];
		}
		else{
			substr1[c1++]=equation[i];
		}
    }
    substr1[c1]='\0';
    substr2[c2]='\0';

    string temp=substr1;
    if(temp=="sin") SIn(substr2);
    else if(temp=="cos") COs(substr2);
	else if(temp=="tan") TAn(substr2);
    else if(temp=="sinin") Sin_in(substr2);
    else if(temp=="cosin") Cos_in(substr2);
    else if(temp=="tanin") Tan_in(substr2);

    else if(temp=="log") LOg(substr2);
    else if(temp=="!") FAC(substr2);
    else if(temp=="sqrt") Root(substr2);
    else if(temp=="cbrt") QRoot(substr2);
    else if(temp=="PI") Pi(substr2);
    else if(temp=="e") E(substr2);
    else{
		char buffer[50];
		double num1=evaluate();
		cout<<num1;
		int k=349;
	    int ans_size = sizeof(num1);
        k=k-ans_size*8;

		sprintf(buffer,"%3.3lf",num1);
		outtextxy(k,70,buffer);

    }
}

int main()
{
    int gd=DETECT;
    int gm;
    int height=800;
    int weight=500;

    initwindow(400,400,"CALCULATOR");
    setfillstyle(1,8);
    bar(0,0,600,500);
	setfillstyle(1,7);
	bar(10,10,weight-10,height-10);
	outtextxy(120,15,"SCIENTIFIC CALCULATOR");
	rectangle(60,35,350,90);
    Button_Display();
    Input_Dispaly();



    getch();
    closegraph();
    return 0;
}

///button create
void Button_Display(){
    Button DEC(70,100,100,120,1,"DEC");
    Button HEX(110,100,140,120,1,"HEX");
    Button BIN(150,100,180,120,1,"BIN");
    Button OCT(190,100,220,120,1,"OCT");
    Button LOG(230,100,260,120,6,"log");
	Button Factorial(270,100,300,120,6,"x!");
    Button ON(310,100,340,120,6,"ON");

    Button SIN(70,130,100,150,0,"sin");
    Button COS(110,130,140,150,0,"cos");
    Button TAN(150,130,180,150,0,"tan");
    Button SIN_in(190,135,225,150,0,"sin^-1");
    Button COS_in(240,135,275,150,0,"cos^-1");
    Button TAN_in(290,135,325,150,0,"tan^-1");

    Button power(70,160,140,180,8,"^");
    Button root(150,160,220,180,8,"sqrt");
    Button CB(230,160,310,180,8,"cbrt");

    Button seven(70,190,100,210,1,"7");
    Button eight(110,190,140,210,1,"8");
    Button nine(150,190,180,210,1,"9");
    Button AC(240,190,310,210,3,"AC");

    Button four(70,220,100,240,1,"4");
    Button five(110,220,140,240,1,"5");
    Button six(150,220,180,240,1,"6");
    Button mul(240,220,270,240,1,"*");
    Button div(280,220,310,240,1,"/");

    Button one(70,250,100,270,1,"1");
    Button two(110,250,140,270,1,"2");
    Button three(150,250,180,270,1,"3");
    Button pluS(240,250,270,270,1,"+");
    Button Minus(280,250,310,270,1,"-");

	Button zero(70,280,100,300,1,"0");
	Button Point(110,280,140,300,1,".");
	Button pi(150,280,180,300,1,"PI");
	Button e(240,280,270,300,1,"e");
	Button Equal(280,280,310,300,1,"=");

    while(true)
	{

		one.hover(GREEN);
		two.hover(GREEN);
		three.hover(GREEN);
		four.hover(GREEN);
		five.hover(GREEN);
		six.hover(GREEN);
		seven.hover(GREEN);
		eight.hover(GREEN);
		nine.hover(GREEN);

		zero.hover(GREEN);
		Point.hover(GREEN);
		pi.hover(GREEN);
		e.hover(GREEN);

		pluS.hover(GREEN);
		Minus.hover(GREEN);
		mul.hover(GREEN);
		div.hover(GREEN);

		Equal.hover(GREEN);

		SIN.hover(GREEN);
		COS.hover(GREEN);
		TAN.hover(GREEN);

		SIN_in.hover(GREEN);
		COS_in.hover(GREEN);
		TAN_in.hover(GREEN);

		LOG.hover(GREEN);
		Factorial.hover(GREEN);

		DEC.hover(GREEN);
		HEX.hover(GREEN);
		BIN.hover(GREEN);
		OCT.hover(GREEN);

		power.hover(GREEN);
		root.hover(GREEN);
		CB.hover(GREEN);
		AC.hover(GREEN);

		ON.hover(GREEN);
		if(GetAsyncKeyState(VK_LBUTTON) & (0x8000!=0))
		{
			if(zero.cursor())expression("0");
			else if(Point.cursor())expression(".");
			else if(one.cursor()) expression("1"); ///Modified by yeasin
			else if(two.cursor())expression("2");///Modified by yeasin
			else if(three.cursor())expression("3");
			else if(four.cursor())expression("4");
			else if(five.cursor())expression("5");
			else if(six.cursor())expression("6");
			else if(seven.cursor())expression("7");
			else if(eight.cursor())expression("8");
			else if(nine.cursor())expression("9");
			else if(pluS.cursor())expression("+");
			else if(Minus.cursor())expression("-");

			else if(mul.cursor())expression("*");
			else if(div.cursor())expression("/");
			else if(SIN.cursor())expression("sin");
			else if(COS.cursor())expression("cos");
			else if(TAN.cursor())expression("tan");

			else if(SIN_in.cursor())expression("sinin");
			else if(COS_in.cursor())expression("cosin");
			else if(TAN_in.cursor())expression("tanin");
			else if(LOG.cursor())expression("log");

			else if(pi.cursor())expression("PI");
			else if(e.cursor())expression("e");

			else if(Factorial.cursor())expression("!");
			else if(root.cursor())expression("sqrt");
			else if(CB.cursor())expression("cbrt");
			else if(power.cursor())expression("^");

			else if(DEC.cursor()) DEc(equation);
			else if(HEX.cursor()) Dec_Hex(equation);
			else if(BIN.cursor()) Dec_Bin(equation);
			else if(OCT.cursor()) Dec_Oct(equation);


			else if(AC.cursor())Ac();
			else if(Equal.cursor())Eql();

		if(kbhit()) getch();
	}
}
}
