/*Project spring 2022
Muhammad Ahmad
i21-0790
BS(CS)-G

*/

#include<iostream>
#include<ctime>
#include<fstream>
#include<cctype>
#include<string>
using namespace std;

//here i made a function named as batting_team1 in which the first team batting will done.

int batting_team1()
{
	cout<<"\t\t\tPAKISTAN BATTING"<<endl;
	cout << "----------------------------------------------------------\n" << endl;
	
	//showing the statement to user to press enter for the bowler.
	cout<<"PRESS ENTER TO BOWL\n"<<endl;
	
	//opening the file by giving name.
	ifstream file("pak.txt");
	//here i created an array of string datatype for array in which i store the team players.ie p1[0] will be ali.
	
	string p1[11];
	//checking the file to be open.
	if (file.is_open())
	{
		//implying the for loop for storing the names.
		for (int i = 0; i < 11; ++i)
		{
			file >> p1[i];
			//here all values will be stored.

		}

	}
		
	//here creating the variables for this function.	
	int score1 = 0;
	int score2 = 0;
	int total_1 = 0;//it is Team 1 total
	
	int total_score1 = 0;
	int total_score2 = 0;
	int jk = 0;
	int jk1 = 1;
	int f = 0;
	int J=0;
	int foul = 0;
	int ahmad = 0;
	int k=1;	
	float ball = 0;
	int bal=0;
	int out=0;
	//these below two variables will store the six and fours and then display them in the code.
	int six=0;
	int four=0;
	float j=0;
	
	//here i open second team file.
	ifstream fil("india.txt");
	//agian creating the string datatype array which will consist of 6 players.
	string p6[6];
	//checking whether the file is open.
	if (fil.is_open())
	{	
		//implying for loop.
		for (int i = 0; i < 6; ++i)
		{	
		
			//the second team six players will store in this above array.
			fil >> p6[i];

		}
	}
	
	//here i put while loop. as there will be 11 players. and 10 wickets so this will run for 10.
	while (f!= 11)
	{
	ball++;
	//incrementing the ball value.
	bal++;
		//as i declared that there will be 20 over so the total ball will be 120 so implying the if else statement so this will run only for 120 balls.	
		if(ball>120)
		{
			return 0;
		
		}
		else
		{	
			
			f = jk +jk1;//total number of players
			if (jk > 5)
			{
				score1 = (rand() % 2)-1;//50 percent chance of getting out
			}
			else
			{
				score1 = (rand() % 7) - 1;//10 percent chance of getting out
			}
			if (jk > 5)
			{
				score2 = (rand() % 2) - 1;//50 percent chance of getting out
			}
			else
			{
				score2 = (rand() % 7) - 1;//10 percent chance of getting out
			}
			//implying the if else statement. 
			if (score1 + score2 == -2)
			{
				foul = rand() % 2;
				//here i declared foul to be equal to random two numbers
				//again implying the if else statement to check if foul will be zero that the score1 will be -1 or else score2 will be -1.
				if (foul == 0)
				{
					score1 = -1;
				}
				
				else
				{
					score2 = -1;
				}
			}
			ahmad = j - int(j);

			if (ahmad==0)
			{
				J=rand()%6;
				cout << "Probbility is " << J << endl;;
				//this will be check the probability.
			}
			//this below line will be used for the menu on s=console which will update at every enter.
			cout<<"Batsmen\t\t\tRuns\t\tWickets\t\t6s\t\t4s\t\ttotal score"<<endl;
			cout << endl;
			
			total_score1 += score1;
			total_score2 += score2;
			//total_1 will be equal to both score1 and score2 addition.			
			total_1 = total_score1 + total_score2 + 2;
			
			cout << p1[jk] << "\t\t";
			//applying the if else statement for checking the score.
			
			//this will check that whether the score1 willbe equal to -1 if then the out will increment by one and out by some random player will be displayed.
			 
			if (score1 == -1)
			{
				jk = jk + 1;
				cout << "out by ";
				cout << p6[J];
				out++;
			}
			//if score will be six the the six variable increment by one.
			else if(score1==6)
			{
				six++;
				
			}
			//if score will be four tha the four variable will increment by one.
			else if (score1==4)
			{
				four++;
			
			}
			//if all above will not apply then the score will be displayed in the for of menu of 1st position player score.
			else
			{
		
				cout <<"\t"<< score1<<"\t\t"<<out<<"\t\t"<<six<<"\t\t"<<four;
			}
			
			cout << endl;
			cout << p1[jk1] << "\t\t";
			
			//here this all will continue again for the score2. ie 2nd position person player.
			if (score2 == -1)
			//so if the score will be -1 then there will be increment by one in out variable and this will display that it will be out by some player of second team
			{
				jk1 = jk1 + 1;
				
				cout << "out by ";
				cout << p6[J];
				out++;
				//cout << endl;
			}
			else if(score2==6)
			//if the score will be six then there will be increament of one in six variable.
			{
				six++;
			
			}
			else if (score2==4)
			//if the the score will be 4 then there will be increment of one in four varaible.
			{
				four++;
			
			}
			//if nothing will satisfy than the score2 will displayed as below format by any random number betwnn 1 and 6
			else
			{
				
				cout <<"\t"<< score2;
			}
			cout << "\t\t\t\t\t\t\t\t\t" << total_1;
			cout << endl;
			//if jk will be equal to jjk1 then the will be increment of 1 in jk.
			if (jk == jk1)
			{
				jk = jk + 1;
			}
			
			j = j + 1;
			cout<<"\n\n\t\t\t("<<ball/10<<")ov"<<endl;
			//displaying the overs.
			//displaying the statement for the bowler.
			cout<<"\nBOWLER\n"<<endl;
			
			//displaying the bowler name.
			cout<<p6[7]<<endl;
			
			cin.get();
			//here i write this above statement for when we press enter than this will done.
			system("clear");
			
			//this above line will clear the console when enter is pressed.
		}
		
		}
		
	cout<<"\n\n\n\n\n"<<endl;
//creating another text file name as score1 in which the total score of first team will be stored.
fstream ob;
	ob.open("score1.txt", ios::out);
	ob <<total_1<< endl;
	//storing the total score value.
	ob.close();
		

return 0;
}
//creatingt another function of integer datatype in which the batting of second team will be done.
int batting_team2()
{
	
	cout << "----------------------------------------------------------\n" << endl;	 
	//showing the statement to user to press enter for the bowler.
	cout<<"PRESS ENTER TO BOWL\n"<<endl;
	
	//opening the file by giving name.
	cout<<"\t\t\tINDIA BATTING"<<endl;
	string p2[11];
	//here i created array as p2.
	ifstream india("india.txt");
	//checking whether the file is open or not.
	if (india.is_open())
	{	
		//applying the for loop.
		for (int i = 0; i < 11; ++i)
		{
			india >> p2[i];
			//reading from file into array p2.

		}

	}
	//creating variables which will be used in the function.
	int score1 = 0;
	int score2 = 0;
	int total_2 = 0;//it is Team 2 total
	int total_score1 = 0;
	int total_score2 = 0;
	int jk = 0;
	int jk1 = 1;
	int f = 0;
	int J=0;
	int foul = 0;
	int ahmad = 0;
	int six=0;
	int four=0;
	float ball=0;
	int bal=0;
	int out=0;
	int k=1;
	int a=0;
	float j=0;
	
	
	// here opening the pak text file 
	ifstream fil("pak.txt");
	string p6[6];//creating string datatype array
	if (fil.is_open())
	{
		//applying for loop for reading from file
		for (int i = 0; i < 6; ++i)
		{
			fil >> p6[i];
			//storing the name in p6.
		}
		

	}
	
	//applying the while loop for batting purpose.
	while (f!= 11)
	{
	ball++;
		//incrementing the ball varaible.	
		bal++;
		//as i declared that there will be 20 over so the total ball will be 120 so implying the if else statement so this will run only for 120 balls.
		if(bal>120)
		{
			return 0;
		}
		else
		{	
			f = jk +jk1;//total number of players
			if (jk > 5)
			{
				score1 = (rand() % 2)-1;//50 percent chance of getting out
			}
			else
			{
				score1 = (rand() % 7) - 1;//10 percent chance of getting out
			}
			if (jk > 5)
			{
				score2 = (rand() % 2) - 1;//50 percent chance of getting out
			}
			else
			{
				score2 = (rand() % 7) - 1;//10 percent chance of getting out
			}
			//again applying the if else statement 
			//checking that the both players cant be out at same time
			if (score1 + score2 == -2)
			{	
				//as if it is done so it is a foul so random number will gerenrate below.
				foul = rand() % 2;
				if (foul == 0)
				//checking if foul will be zero than score1 will be -1.
				{
					score1 = -1;
				}
				else
				{
				//if not than the score2 will be -1.
					score2 = -1;
				}
			}
			ahmad = j - int(j);

			if (ahmad==0)
			{
				J=rand()%6;
				cout << "Probability is " << J << endl;
				//this will show the probability value.	
			}
			//this below is written for the menu.
			cout<<"Batsmen\t\t\tRuns\t\tWickets\t\t6s\t\t4s\t\ttotal score"<<endl;
			cout << endl;
			
			
			total_score1 += score1;
			total_score2 += score2;
			
			//so the total score will be equal to the addition of score1 and score2;
			total_2 = total_score1 + total_score2 + 2;
			
			cout << p2[jk] << "\t\t";

			//if score1 will be -1 then it will be an out and there will be incrementation of one in out variable
			if (score1 == -1)
			{
				jk = jk + 1;
				cout << "out by ";
				//this will show that this person will out by other person.
				cout << p6[J];
				out++;
				//here incrementation will be done.
			}
			else if(score1==6)
			{
			//if score1 will be six than there will be incrementation of one in six variable which is of integer datatype.
				six++;
			
			}
			//if score1 will be four than there will be incrementation of one in four variable.
			else if (score1==4)
			{
				four++;
			
			}
			//if none of the condition sastisfy than the score will be dispalyed.
			else{
		
				cout <<"\t"<< score1<<"\t\t"<<out<<"\t\t"<<six<<"\t\t"<<four;
			}
				
			cout << endl;

			cout << p2[jk1] << "\t\t";
			
			//if the score2 will be -1 than it is out and it will be tell that it is out by some random perosn of other team.
			if (score2 == -1)
			{
				jk1 = jk1 + 1;
				
				cout << "out by ";
				cout << p6[J];
				out++;
				//in this i increment it by one.
				//cout << endl;
			}
			//if score2 will be six than there will be incrementation of one in six variable.
			else if(score2==6)
			{
				six++;
		
			}
			//if score2 will be four than there will be incrementation of one in four variable.
			else if (score2==4)
			{
				four++;
				//here incrementation will be done.
			}
			
			else{
				cout <<"\t"<< score2;
			}
			cout << "\t\t\t\t\t\t\t\t\t" << total_2;
			cout << endl;
			if (jk == jk1)
			{
				jk = jk + 1;
			}
			j = j + 1;
			cout<<"\n\n\t\t\t("<<ball/10<<")ov"<<endl;
			//displaying the overs.
			
			cout<<"\nBowler\n"<<endl;
			//here i diaplayed random bowler of other team.
			cout<<p6[7]<<endl;
			
			//cout<<"\n\n\t\t\t("<<bal<<"."<<k<<")ov"<<endl;
			
			cin.get();
			//f++;
			
			system("clear");
		}
		}
		//cout<<"\n\n\t\t\t("<<k/10<<")ov"<<endl;
		
//creating another text file name as score in which the total score of second team will be stored.
	fstream ob;
	ob.open("score.txt", ios::out);
	ob <<total_2<< endl;
	//storing the total score value.
	ob.close();

return 0;
}

/*
void bowling_team1()
{
	//here i am writing in pak text file 
	cout << "Bowler" << endl;
	ifstream file("pak.txt");
	string p1[10];
	if (file.is_open())
	{

		again storing the all values in new string array.
		for (int i = 0; i < 10; ++i)
		{
			file >> p1[i];


		}

	}
	displaying the bowler name.
	cout << p1[6] << endl;

	cout << endl;
}
*/
//this is the second function for second team bowling.
void bowling_team2()
{
	//here i am writing in india text file 
	cout << "Bowler" << endl;
	string p2[10];
	//for second team.
	ifstream india("india.txt");
	//string p2[10];
	if (india.is_open())
	{


		for (int i = 0; i < 10; ++i)
		{
			india >> p2[i];
			//cout<<p2[i]<<endl;

		}

	}

	//this above will show second team player which will be on number 7.
	cout << p2[6] << endl;
	cout << endl;
}
//here this function is created in which the toss will be done.
int toss(string team_1, string team_2)
{	
	//applying srand comnndition.
	srand(time(NULL));
	int tos;
	//here i created tos varaible of integer datatype.
	tos = (rand() % 2) + 1;
	//this will generate a random number 
	
	//tos = 1;
	cin.get();
	//this toss will be done by pressing enter.
	
	//applying the if else condition to check whether if the tos will be one than teama_1 will win the match. 
	if (tos == 1)
	
	{
		cout << team_1 << " will bat first." << endl;
		
		//as if team_1 win the toss than it will bat first so i call first team 1 batting function and than i call team 2 batting function
		batting_team1();
		batting_team2();
		
	}
	else
	{
	//as in else obviously the second team will bat first.
		
		cout << team_2 << " will bat first." << endl;
		//as second tem will bat first so here i first call team 2 batting function and than i call frst team batting function
		batting_team2();
		batting_team1();
	}

return 0;	
}

//this function is created for the craeting the file for the two teams and than writing the both teams names in that files.
void teams()
{	

	//here i created the first team file as pak.txt as it is a test file.
	fstream ob;
	//here opening the file and craeted the name and setting it in inverted commas.
	ob.open("pak.txt", ios::out);
	//here below writing the names of the palyers of first team.
	ob << "Fakhar\nBabar\nAsif\nImad\nShadab\nHassan\nRizwan\nHafeez\nAmir\nAfridi\nShaheen" << endl;
	ob.close();
	//closing the pak.txt file 
	cout << "\nPAKISTAN TEAM\n" << endl;
	ob.open("pak.txt", ios::in);
	//againg opening the file and taking while loop. and calling the values in str.
	while (!ob.eof())
	{
		string str;
		ob >> str;
		//here below displaying the names of team 1.
		cout << str << endl;
	}
	ob.close();
	//closing the file.

	//creating the new text fi8le as india for second team.
	fstream out;
	//opening the file.
	out.open("india.txt", ios::out);
	
	//writing the name of second team palyers by \n so that every name will enter in new line.
	out << "Jadhav\nKuldeep\nPandya\nBishnoi\nShami\nMayanak\nBumrah\nJadeja\nDhoni\nSharma\nKohli" << endl;
	out.close();
	//closing the file
	cout << "\nINDIA TEAM\n" << endl;
	out.open("india.txt", ios::in);
	
	//opeing the file applying thw while loop.
	while (!out.eof())
	{
		string str;//creating string datatype str varaible and first giving all names in it.
		out >> str;
		cout << str << endl;
		//displaying the all values on the console.
	}
	out.close();

}
int main()
{
	//crearing the varaible in main function.
	string team_1 = "Pakistan";
	string team_2 = "India";
	string p11[11];
	string p22[11];
	int total_1=0;
	int total_2=0;
	
	cout << "\tWelcome to the Cricket Match Between Pakistan And India" << endl;
	
	string p1[11];
	teams();//calling the teams function which is created on upper from main.
	
	//again opeing the pak text file and storing the values in arrays.
	ifstream file("pak.txt");
	if (file.is_open())
	{


		for (int i = 0; i <=10; ++i)
		{
			file >> p1[i];

		}

	}
	cout << endl << endl;


	//here i created the india text file and same as above storing the value in p2 array
	string p2[11];
	ifstream india("india.txt");
	if (india.is_open())
	{


		for (int i = 0; i <= 10; ++i)
		{
			india >> p2[i];

		}

	}
	cout<<"\t\t\tPress Enter for toss"<<endl;

	toss(team_1, team_2);
	cout<<"\t\t*****************"<<endl;
		
	//here opening the score text file and storing the value in it in total_1 
	ifstream sc("score.txt");
	if (sc.is_open())
	{

		sc >> total_2;
		
	}
	//here opening the score1 text file and storing the value in it in total_2
	ifstream sc1("score1.txt");
	if (sc1.is_open())
	{
		
		sc1 >> total_1;
	
	}
	//displaying the score of each team.
	cout<<"Pakistan scored "<<total_1<<endl;
	cout<<"India scored "<<total_2<<endl;
	
	//setting the if else statements.
	//if total_1 will be greater than total_2 then team 1 will win the match.
	if(total_1>total_2) 
	{	
		
		cout<<"\tCongratulations "<<team_1<<" Wins the match"<<endl;
	}
	
	//if total_1 will be smaller than total_2 then team 2 will win the match.
	else if(total_2>total_1)
	{	
		
		cout<<"\tCongratulations "<<team_2<<" Wins the match"<<endl;
	}
	//if total_1 will be equal to total_2 then match will be tied.
	else if(total_1=total_2)
	{
		cout<<"\tMatch tied"<<endl;

	}
	return 0;
}
