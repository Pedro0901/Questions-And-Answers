/* PROGRAM OF QUESTIONS AND ANSWERS */

#include <iostream>
#include <stdio.h>
#include <cmath>
#include <locale.h>

using namespace std;

int main(){
	
	//Allows you to use accents
	setlocale(LC_ALL, "");
	
	//Defining variables for user choices
	char Name[50];
	int Choice;
	char Answers;
	
	//Defining variables for game results
	int Hits = 0;
	int Misses = 0;
	int EasyHits = 0;
	int MediumHits = 0;
	int HardHits = 0;
	int QuestionAnswered = 0;
	int SkippedQuestions = 0;
	int Question = 1;
	
	//Variables for difficulties (Separated by switch)
	int Easy = 0;
	int Medium = 0;
	int Hard = 0;
	
	//Program Header
	cout << "================== GAME OF QUESTION AND ANSWERS ========================\n";
	
	//User informs his name
	cout << "\nEnter the name of the participant and then press the \"enter\" key.\n";
	cout << "\nNAME OF THE PARTICIPANT: ";
	
	//Gets function in variable name reads user's full name
	gets(Name);
	
	//Clear the screen after pressing enter
	system("CLS");
	
	//Welcomes the user
	cout << "================= YOU'RE WELCOME ===========================================\n";
	cout << "\nWELCOME " << Name << "!";
	
	//Explanation of the game to the user
	cout << "\n\n-------------------------------------------------------------------------------\n";
	cout << "\nThis is a fun game of questions and answers.\n";
	cout << "\nThe player must choose among the 4 alternatives only one and then press \"enter\".\n\n";
	cout << "-------------------------------------------------------------------------------\n";
	
	//Wishes the user good luck
	cout << "\nGood Luck and Good Game!";
	cout << "\nPress \"enter\" to proceed.";
	getchar();
	
	//Clear the screen after pressing enter
	system("CLS");
	
	//PART OF QUESTIONS - SWITCH 01 - EASY LEVEL
	switch(Easy){
		
		//QUESTION 01 - EASY
		case 0:
			
			//Shows the number of the question and its level
			cout << "----------------------------------\n";
			cout << "   Question n° " << Question << " Level: Easy.";
			cout << "\n----------------------------------";
			
			//Shows the question and alternatives to the user
			cout << "\n\nWhat is Brexit?";
			
			//Alternatives
			cout << "\n\nA) United Kingdom exit from the Eurozone.";
			cout << "\nB) Departure of the United Kingdom from the European Union.";
			cout << "\nC) England's departure from the United Kingdom.";
			cout << "\nD) End of the monarchy in the United Kingdom.";
			
			//Option list header - Separation
			cout << "\n\n----------------------------------\n";
			cout << "   LIST OF OPTIONS";
			cout << "\n----------------------------------";
			
			//Alternatives to choose
			cout << "\n\n1 - ANSWER.";
			cout << "\n2 - SKIP.";
			cout << "\n\nCHOOSE ONE OF THE ALTERNATIVES: ";
			cin >> Choice;
			
			//CONDITIONAL "IF" for choices - ANSWER
			if(Choice == 1){
				cout << "\nWhat is the correct answer? ";
				cin >> Answers;
				if((Answers == 'b') || (Answers == 'B')){
					cout << "\nRight answer!";
					Hits++;
					EasyHits++;
					
					//Explanation of the answer 
					cout << "\n\nEXPLANATION: The term Brexit comes from the combination of the English words";
					cout << "\n\"Britain\" and \"Exit\". This process, which started with the referendum of 23 June";
					cout << "2016, represents the UK's withdrawal from the European Union. On 31 January 2020";
					cout << "the UK definitely left the European Union to become the first country to do so.";
					
				}else{
					cout << "\nIncorrect answer!!";
					cout << "\nCorrect answer: Letter B";
					Misses++;
					
					//EXPLICAÇÃO DA RESPOSTA 
					cout << "\n\nEXPLANATION: The term Brexit comes from the combination of the English words";
					cout << "\n\"Britain\" and \"Exit\". This process, which started with the referendum of 23 June";
					cout << "2016, represents the UK's withdrawal from the European Union. On 31 January 2020";
					cout << "the UK definitely left the European Union to become the first country to do so.";
				}
				
				//Shows that the question has been answered
				QuestionAnswered++;
				
				//Skip to the next question
				cout << "\n-------------------------------------------------------------------------------\n";
				getchar();
				cout << "\nPress \"enter\" to continue...";
				getchar();
				system("CLS");
			}
			
			//CONDITIONAL "IF" for choices - SKIP
			if(Choice == 2){
				SkippedQuestions++;
				cout << "\n\nPress \"enter\" to skip the question";
				getchar();
				//To clear the screen and go to the next question 
				getchar();
				system("CLS");
			}
		
		//QUESTION 02 - EASY
		case 1:
			
			//Shows the number of the question and its level
			cout << "----------------------------------\n";
			cout << "   Question n° " << Question + 1 << " Level: Easy.";
			cout << "\n----------------------------------";
			
			//Shows the question and alternatives to the user
			cout << "\n\nWhat is the nationality of the sociologist and philosopher Durkheim?";
			
			//Alternatives
			cout << "\n\nA) German.";
			cout << "\nB) Norwegian.";
			cout << "\nC) English.";
			cout << "\nD) French.";
			
			//Option list header - Separation
			cout << "\n\n----------------------------------\n";
			cout << "   LIST OF OPTIONS";
			cout << "\n----------------------------------";
			
			//Alternatives to choose
			cout << "\n\n1 - ANSWER.";
			cout << "\n2 - SKIP.";
			cout << "\n\nCHOOSE ONE OF THE ALTERNATIVES: ";
			cin >> Choice;
			
			//CONDITIONAL "IF" for choices - ANSWER
			if(Choice == 1){
				cout << "\nWhat is the correct answer? ";
				cin >> Answers;
				if((Answers == 'd') || (Answers == 'D')){
					cout << "\nRight answer!";
					Hits++;
					EasyHits++;
					
					//Explanation of the answer 
					cout << "\n\nEXPLANATION: David Émile Durkheim (1858-1917) was one of the greatest sociolo - ";
					cout << "gists, philosophers and anthropologists of all time. He was born in the French";
					cout << "\ncity of Épinal, and died in Paris.";
					
				}else{
					cout << "\nIncorrect answer!!";
					cout << "\nCorrect answer: Letter D";
					Misses++;
					
					//Explanation of the answer 
					cout << "\n\nEXPLANATION: David Émile Durkheim (1858-1917) was one of the greatest sociolo - ";
					cout << "gists, philosophers and anthropologists of all time. He was born in the French";
					cout << "\ncity of Épinal, and died in Paris.";
				}
				
				//Shows that the question has been answered
				QuestionAnswered++;
				
				//Skip to the next question
				cout << "\n-------------------------------------------------------------------------------\n";
				getchar();
				cout << "\nPress \"enter\" to continue...";
				getchar();
				system("CLS");
			}
			
			//CONDITIONAL "IF" for choices - SKIP
			if(Choice == 2){
				SkippedQuestions++;
				cout << "\n\nPress \"enter\" to skip the question";
				getchar();
				//To clear the screen and go to the next question 
				getchar();
				system("CLS");
			}
			
		//QUESTION 03 - EASY
		case 2:
			
			//Shows the number of the question and its level
			cout << "----------------------------------\n";
			cout << "   Question n° " << Question + 2 << " Level: Easy.";
			cout << "\n----------------------------------";
			
			//Shows the question and alternatives to the user
			cout << "\n\nChernobyl and Cesium-137 are part of the biggest nuclear accidents in history.";
			cout << "\nIn which countries did it happen?";
			
			//Alternatives
			cout << "\n\nA) Russia and Spain.";
			cout << "\nB) Ukraine and Brazil.";
			cout << "\nC) United States and Ukraine.";
			cout << "\nD) Japan and Brazil.";
			
			//Option list header - Separation
			cout << "\n\n----------------------------------\n";
			cout << "   LIST OF OPTIONS";
			cout << "\n----------------------------------";
			
			//Alternatives to choose
			cout << "\n\n1 - ANSWER.";
			cout << "\n2 - SKIP.";
			cout << "\n\nCHOOSE ONE OF THE ALTERNATIVES: ";
			cin >> Choice;
			
			//CONDITIONAL "IF" for choices - ANSWER
			if(Choice == 1){
				cout << "\nWhat is the correct answer? ";
				cin >> Answers;
				if((Answers == 'b') || (Answers == 'B')){
					cout << "\nRight answer!";
					Hits++;
					EasyHits++;
					
					//Explanation of the answer 
					cout << "\n\nEXPLANATION: The accident in Chernobyl, a city located in northern Ukraine,";
					cout << "\nhappened on April 26, 1986, when a nuclear reactor exploded causing the release of toxic";
					cout << "waste over a huge area.";
					cout << "\n\nThe cesium-137 accident happened in Goiânia on September 13, 1987, when garbage";
					cout << "\ncollectors collected a radiotherapy device in a disabled clinic, without knowing";
					cout << "what it was about, in order to sell it in the junkyard.";
					
				}else{
					cout << "\nIncorrect answer!!";
					cout << "\nCorrect answer: Letter B";
					Misses++;
					
					//Explanation of the answer 
					cout << "\n\nEXPLANATION: The accident in Chernobyl, a city located in northern Ukraine,";
					cout << "\nhappened on April 26, 1986, when a nuclear reactor exploded causing the release of toxic";
					cout << "waste over a huge area.";
					cout << "\n\nThe cesium-137 accident happened in Goiânia on September 13, 1987, when garbage";
					cout << "\ncollectors collected a radiotherapy device in a disabled clinic, without knowing";
					cout << "what it was about, in order to sell it in the junkyard.";
				}
				
				//Shows that the question has been answered
				QuestionAnswered++;
				
				//Skip to the next question
				cout << "\n-------------------------------------------------------------------------------\n";
				getchar();
				cout << "\nPress \"enter\" to continue...";
				getchar();
				system("CLS");
			}
			
			//CONDITIONAL "IF" for choices - SKIP
			if(Choice == 2){
				SkippedQuestions++;
				cout << "\n\nPress \"enter\" to skip the question";
				getchar();
				//To clear the screen and go to the next question 
				getchar();
				system("CLS");
			}
		
		//QUESTION 04 - EASY
		case 3:
			
			//Shows the number of the question and its level
			cout << "----------------------------------\n";
			cout << "   Question n° " << Question + 3 << " Level: Easy.";
			cout << "\n----------------------------------";
			
			//Shows the question and alternatives to the user
			cout << "\n\nIn which country was Auschwitz, the largest Nazi concentration camp, located?";
			
			//Alternatives
			cout << "\n\nA) Germany.";
			cout << "\nB) United States.";
			cout << "\nC) Poland.";
			cout << "\nD) Austria.";
			
			//Option list header - Separation
			cout << "\n\n----------------------------------\n";
			cout << "   LIST OF OPTIONS";
			cout << "\n----------------------------------";
			
			//Alternatives to choose
			cout << "\n\n1 - ANSWER.";
			cout << "\n2 - SKIP.";
			cout << "\n\nCHOOSE ONE OF THE ALTERNATIVES: ";
			cin >> Choice;
			
			//CONDITIONAL "IF" for choices - ANSWER
			if(Choice == 1){
				cout << "\nWhat is the correct answer? ";
				cin >> Answers;
				if((Answers == 'c') || (Answers == 'C')){
					cout << "\nRight answer!";
					Hits++;
					EasyHits++;
					
					//Explanation of the answer 
					cout << "\n\nEXPLANATION: The largest extermination center in World War II was installed in";
					cout << "\nPoland, 60 kilometers from its capital. Founded in 1940, it operated until Janu-";
					cout << "ary 1945.";
					
				}else{
					cout << "\nIncorrect answer!!";
					cout << "\nCorrect answer: Letter C";
					Misses++;
					
					//Explanation of the answer 
					cout << "\n\nEXPLANATION: The largest extermination center in World War II was installed in";
					cout << "\nPoland, 60 kilometers from its capital. Founded in 1940, it operated until Janu-";
					cout << "ary 1945.";
				}
				
				//Shows that the question has been answered
				QuestionAnswered++;
				
				//Skip to the next question
				cout << "\n-------------------------------------------------------------------------------\n";
				getchar();
				cout << "\nPress \"enter\" to continue...";
				getchar();
				system("CLS");
			}
			
			//CONDITIONAL "IF" for choices - SKIP
			if(Choice == 2){
				SkippedQuestions++;
				cout << "\n\nPress \"enter\" to skip the question";
				getchar();
				//To clear the screen and go to the next question 
				getchar();
				system("CLS");
			}
			
		//QUESTION 05 - EASY
		case 4:
			
			//Shows the number of the question and its level
			cout << "----------------------------------\n";
			cout << "   Question n° " << Question + 4 << " Level: Easy.";
			cout << "\n----------------------------------";
			
			//Shows the question and alternatives to the user
			cout << "\n\nWhat are the biggest pandemics in history?";
			
			//Alternatives
			cout << "\n\nA) Spanish flu and cancer.";
			cout << "\nB) Smallpox and Hypertension.";
			cout << "\nC) Asthma and Spanish Flu.";
			cout << "\nD) Black Death and Covid-19.";
			
			//Option list header - Separation
			cout << "\n\n----------------------------------\n";
			cout << "   LIST OF OPTIONS";
			cout << "\n----------------------------------";
			
			//Alternatives to choose
			cout << "\n\n1 - ANSWER.";
			cout << "\n2 - SKIP.";
			cout << "\n\nCHOOSE ONE OF THE ALTERNATIVES: ";
			cin >> Choice;
			
			//CONDITIONAL "IF" for choices - ANSWER
			if(Choice == 1){
				cout << "\nWhat is the correct answer? ";
				cin >> Answers;
				if((Answers == 'd') || (Answers == 'D')){
					cout << "\nRight answer!";
					Hits++;
					EasyHits++;
					
					//Explanation of the answer 
					cout << "\n\nEXPLANATION: With the exception of alternative d), in each of the alternatives";
					cout << "\nthere is only one pandemic. Cancer, hypertension, and asthma cannot be pandemics";
					cout << "because they are not contagious diseases.";
					
				}else{
					cout << "\nIncorrect answer!!";
					cout << "\nCorrect answer: Letter D";
					Misses++;
					
					//Explanation of the answer 
					cout << "\n\nEXPLANATION: With the exception of alternative d), in each of the alternatives";
					cout << "\nthere is only one pandemic. Cancer, hypertension, and asthma cannot be pandemics";
					cout << "because they are not contagious diseases.";
				}
				
				//Shows that the question has been answered
				QuestionAnswered++;
				
				//Skip to the next question
				cout << "\n-------------------------------------------------------------------------------\n";
				getchar();
				cout << "\nPress \"enter\" to continue...";
				getchar();
				system("CLS");
			}
			
			//CONDITIONAL "IF" for choices - SKIP
			if(Choice == 2){
				SkippedQuestions++;
				cout << "\n\nPress \"enter\" to skip the question";
				getchar();
				//To clear the screen and go to the next question 
				getchar();
				system("CLS");
			}
			
		//QUESTION 06 - EASY
		case 5:
			
			//Shows the number of the question and its level
			cout << "----------------------------------\n";
			cout << "   Question n° " << Question + 5 << " Level: Easy.";
			cout << "\n----------------------------------";
			
			//Shows the question and alternatives to the user
			cout << "\n\nWhose famous phrase is it: \"I think, therefore I am\"?";
			
			//Alternatives
			cout << "\n\nA) René Descartes.";
			cout << "\nB) Plato.";
			cout << "\nC) Galileu Galilei.";
			cout << "\nD) Francis Bacon.";
			
			//Option list header - Separation
			cout << "\n\n----------------------------------\n";
			cout << "   LIST OF OPTIONS";
			cout << "\n----------------------------------";
			
			//Alternatives to choose
			cout << "\n\n1 - ANSWER.";
			cout << "\n2 - SKIP.";
			cout << "\n\nCHOOSE ONE OF THE ALTERNATIVES: ";
			cin >> Choice;
			
			//CONDITIONAL "IF" for choices - ANSWER
			if(Choice == 1){
				cout << "\nWhat is the correct answer? ";
				cin >> Answers;
				if((Answers == 'a') || (Answers == 'A')){
					cout << "\nRight answer!";
					Hits++;
					EasyHits++;
					
					//Explanation of the answer 
					cout << "\n\nEXPLANATION: “Je pense, donc je suis” is the original phrase, written in French,";
					cout << "by the philosopher René Descartes (1596-1650). It summarizes Descartes' thinking";
					cout << "and method, for whom everything starts in doubt.";
					
				}else{
					cout << "\nIncorrect answer!!";
					cout << "\nCorrect answer: Letter A";
					Misses++;
					
					//Explanation of the answer 
					cout << "\n\nEXPLANATION: “Je pense, donc je suis” is the original phrase, written in French,";
					cout << "by the philosopher René Descartes (1596-1650). It summarizes Descartes' thinking";
					cout << "and method, for whom everything starts in doubt.";
				}
				
				//Shows that the question has been answered
				QuestionAnswered++;
				
				//Skip to the next question
				cout << "\n-------------------------------------------------------------------------------\n";
				getchar();
				cout << "\nPress \"enter\" to continue...";
				getchar();
				system("CLS");
			}
			
			//CONDITIONAL "IF" for choices - SKIP
			if(Choice == 2){
				SkippedQuestions++;
				cout << "\n\nPress \"enter\" to skip the question";
				getchar();
				//To clear the screen and go to the next question 
				getchar();
				system("CLS");
			}
			
		//QUESTION 07 - EASY
		case 6:
			
			//Shows the number of the question and its level
			cout << "----------------------------------\n";
			cout << "   Question n° " << Question + 6 << " Level: Easy.";
			cout << "\n----------------------------------";
			
			//Shows the question and alternatives to the user
			cout << "\n\nWhere did the invention of the electric shower come from?";
			
			//Alternatives
			cout << "\n\nA) French.";
			cout << "\nB) England.";
			cout << "\nC) Brazil.";
			cout << "\nD) Italy.";
			
			//Option list header - Separation
			cout << "\n\n----------------------------------\n";
			cout << "   LIST OF OPTIONS";
			cout << "\n----------------------------------";
			
			//Alternatives to choose
			cout << "\n\n1 - ANSWER.";
			cout << "\n2 - SKIP.";
			cout << "\n\nCHOOSE ONE OF THE ALTERNATIVES: ";
			cin >> Choice;
			
			//CONDITIONAL "IF" for choices - ANSWER
			if(Choice == 1){
				cout << "\nWhat is the correct answer? ";
				cin >> Answers;
				if((Answers == 'c') || (Answers == 'C')){
					cout << "\nRight answer!";
					Hits++;
					EasyHits++;
					
					//Explanation of the answer 
					cout << "\n\nEXPLANATION: Francisco Canhos is the name of the man who, in the 1940s, develo-";
					cout << "\nped the first safe electric shower in Jaú, state of São Paulo. The device had";
					cout << "\nbeen developed since the 1930s, but presented risks of short circuit.";
					
				}else{
					cout << "\nIncorrect answer!!";
					cout << "\nCorrect answer: Letter C";
					Misses++;
					
					//Explanation of the answer 
					cout << "\n\nEXPLANATION: Francisco Canhos is the name of the man who, in the 1940s, develo-";
					cout << "\nped the first safe electric shower in Jaú, state of São Paulo. The device had";
					cout << "\nbeen developed since the 1930s, but presented risks of short circuit.";
				}
				
				//Shows that the question has been answered
				QuestionAnswered++;
				
				//Skip to the next question
				cout << "\n-------------------------------------------------------------------------------\n";
				getchar();
				cout << "\nPress \"enter\" to continue...";
				getchar();
				system("CLS");
			}
			
			//CONDITIONAL "IF" for choices - SKIP
			if(Choice == 2){
				SkippedQuestions++;
				cout << "\n\nPress \"enter\" to skip the question";
				getchar();
				//To clear the screen and go to the next question 
				getchar();
				system("CLS");
			}
			
		//QUESTION 08 - EASY
		case 7:
			
			//Shows the number of the question and its level
			cout << "----------------------------------\n";
			cout << "   Question n° " << Question + 7 << " Level: Easy.";
			cout << "\n----------------------------------";
			
			//Shows the question and alternatives to the user
			cout << "\n\nWhich is the smallest and largest country in the world?";
			
			//Alternatives
			cout << "\n\nA) Vatican and Russia.";
			cout << "\nB) Nauru and China.";
			cout << "\nC) Monaco and United States.";
			cout << "\nD) San Marino and India.";
			
			//Option list header - Separation
			cout << "\n\n----------------------------------\n";
			cout << "   LIST OF OPTIONS";
			cout << "\n----------------------------------";
			
			//Alternatives to choose
			cout << "\n\n1 - ANSWER.";
			cout << "\n2 - SKIP.";
			cout << "\n\nCHOOSE ONE OF THE ALTERNATIVES: ";
			cin >> Choice;
			
			//CONDITIONAL "IF" for choices - ANSWER
			if(Choice == 1){
				cout << "\nWhat is the correct answer? ";
				cin >> Answers;
				if((Answers == 'a') || (Answers == 'A')){
					cout << "\nRight answer!";
					Hits++;
					EasyHits++;
					
					//Explanation of the answer 
					cout << "\n\nEXPLANATION: The Vatican, home to the Catholic Church, has only 44 hectares \n(0.44 square kilometers).";
					cout << "\nRussia, located on two continents (Asia and Europe), has 17 million square kilo-meters.";
					
				}else{
					cout << "\nIncorrect answer!!";
					cout << "\nCorrect answer: Letter A";
					Misses++;
					
					//Explanation of the answer 
					cout << "\n\nEXPLANATION: The Vatican, home to the Catholic Church, has only 44 hectares (0.44 square kilometers).";
					cout << "\nRussia, located on two continents (Asia and Europe), has 17 \ nmillion square kilometers.";
				}
				
				//Shows that the question has been answered
				QuestionAnswered++;
				
				//Skip to the next question
				cout << "\n-------------------------------------------------------------------------------\n";
				getchar();
				cout << "\nPress \"enter\" to continue...";
				getchar();
				system("CLS");
			}
			
			//CONDITIONAL "IF" for choices - SKIP
			if(Choice == 2){
				SkippedQuestions++;
				cout << "\n\nPress \"enter\" to skip the question";
				getchar();
				//To clear the screen and go to the next question 
				getchar();
				system("CLS");
			}
			
		//QUESTION 09 - EASY
		case 8:
			
			//Shows the number of the question and its level
			cout << "----------------------------------\n";
			cout << "   Question n° " << Question + 8 << " Level: Easy.";
			cout << "\n----------------------------------";
			
			//Shows the question and alternatives to the user
			cout << "\n\nWhat are the vessels that carry blood from the heart to the periphery of the bo-dy called?";
			
			//Alternatives
			cout << "\n\nA) Veins.";
			cout << "\nB) Atrium.";
			cout << "\nC) Ventricles.";
			cout << "\nD) Arteries.";
			
			//Option list header - Separation
			cout << "\n\n----------------------------------\n";
			cout << "   LIST OF OPTIONS";
			cout << "\n----------------------------------";
			
			//Alternatives to choose
			cout << "\n\n1 - ANSWER.";
			cout << "\n2 - SKIP.";
			cout << "\n\nCHOOSE ONE OF THE ALTERNATIVES: ";
			cin >> Choice;
			
			//CONDITIONAL "IF" for choices - ANSWER
			if(Choice == 1){
				cout << "\nWhat is the correct answer? ";
				cin >> Answers;
				if((Answers == 'd') || (Answers == 'D')){
					cout << "\nRight answer!";
					Hits++;
					EasyHits++;
					
					//Explanation of the answer 
					cout << "\n\nEXPLANATION: Arteries are a type of blood vessels that carry arterial blood \n(with oxygen and nutrients) ";
					cout << "from the heart to the body.";
					
				}else{
					cout << "\nIncorrect answer!!";
					cout << "\nCorrect answer: Letter D";
					Misses++;
					
					//Explanation of the answer 
					cout << "\n\nEXPLANATION: Arteries are a type of blood vessels that carry arterial blood \n(with oxygen and nutrients) ";
					cout << "from the heart to the body.";
				}
				
				//Shows that the question has been answered
				QuestionAnswered++;
				
				//Skip to the next question
				cout << "\n-------------------------------------------------------------------------------\n";
				getchar();
				cout << "\nPress \"enter\" to continue...";
				getchar();
				system("CLS");
			}
			
			//CONDITIONAL "IF" for choices - SKIP
			if(Choice == 2){
				SkippedQuestions++;
				cout << "\n\nPress \"enter\" to skip the question";
				getchar();
				//To clear the screen and go to the next question 
				getchar();
				system("CLS");
			}
			
		//QUESTION 10 - EASY
		case 9:
			
			//Shows the number of the question and its level
			cout << "----------------------------------\n";
			cout << "   Question n° " << Question + 9 << " Level: Easy.";
			cout << "\n----------------------------------";
			
			//Shows the question and alternatives to the user
			cout << "\n\nWho painted \"Guernica\"?";
			
			//Alternatives
			cout << "\n\nA) Pablo Picasso.";
			cout << "\nB) Salvador Dalí.";
			cout << "\nC) Diego Rivera.";
			cout << "\nD) Tarsila do Amaral.";
			
			//Option list header - Separation
			cout << "\n\n----------------------------------\n";
			cout << "   LIST OF OPTIONS";
			cout << "\n----------------------------------";
			
			//Alternatives to choose
			cout << "\n\n1 - ANSWER.";
			cout << "\n2 - SKIP.";
			cout << "\n\nCHOOSE ONE OF THE ALTERNATIVES: ";
			cin >> Choice;
			
			//CONDITIONAL "IF" for choices - ANSWER
			if(Choice == 1){
				cout << "\nWhat is the correct answer? ";
				cin >> Answers;
				if((Answers == 'a') || (Answers == 'A')){
					cout << "\nRight answer!";
					Hits++;
					EasyHits++;
					
					//Explanation of the answer 
					cout << "\n\nEXPLANATION: Pablo Picasso (1881-1973) painted Guernica, one of his most promi-\nnent works, in 1937.";
					cout << "The painting done in oil on canvas depicts the bombing of \nthe Spanish city Guernica on April 26, 1937, during the Spanish Civil War.";
					
				}else{
					cout << "\nIncorrect answer!!";
					cout << "\nCorrect answer: Letter A";
					Misses++;
					
					//Explanation of the answer 
					cout << "\n\nEXPLANATION: Pablo Picasso (1881-1973) painted Guernica, one of his most promi-\nnent works, in 1937.";
					cout << "The painting done in oil on canvas depicts the bombing of \nthe Spanish city Guernica on April 26, 1937, during the Spanish Civil War.";
				}
				
				//Shows that the question has been answered
				QuestionAnswered++;
				
				//Skip to the next question
				cout << "\n-------------------------------------------------------------------------------\n";
				getchar();
				cout << "\nPress \"enter\" to continue...";
				getchar();
				system("CLS");
			}
			
			//CONDITIONAL "IF" for choices - SKIP
			if(Choice == 2){
				SkippedQuestions++;
				cout << "\n\nPress \"enter\" to skip the question";
				getchar();
				//To clear the screen and go to the next question 
				getchar();
				system("CLS");
			}
			
			/* AS THIS IS THE LAST QUESTION OF THIS LEVEL, WE MUST BREAK THE SWITCH. 
			AS EVERY SWITCH CORRESPONDS TO A LEVEL OF DIFFICULTY */
			
			//Skip to the next question / Break the case
			break;
	}
	
	//Clears the screen after the end of the level
	system("CLS");
	
	//Welcomes and congratulates the user
	cout << "================= CONGRATULATIONS, LEVEL COMPLETED =============================\n";
	cout << "\nCongratulations " << Name << "! You just passed the Easy level of our challenge.";
	
	//Makes the program closer to the user, making a joke
	cout << "\n\n-------------------------------------------------------------------------------\n";
	cout << "\nYou just completed 1/3 of our challenge, and do you know what that means?\n";
	cout << "It doesn't mean anything. Only that you answered 10 of the 30 total questions.\n\n";
	cout << "-------------------------------------------------------------------------------\n";
	
	//Explains the game and gives the possibility to continue
	cout << "\nJokes aside, congratulations, good luck and good game remaining!";
	cout << "\n\nPress \"enter\" to proceed...";
	getchar();
	getchar();
	
	//Clear the screen again to be directed to MIDDLE level questions
	system("CLS");
	
	//PART OF QUESTIONS - SWITCH 02 - MEDIUM LEVEL
	switch(Medium){
		
		//QUESTION 01 - MEDIUM
		case 0:
			
			//Shows the number of the question and its level
			cout << "----------------------------------\n";
			cout << "   Question n° " << Question << " Level: Medium.";
			cout << "\n----------------------------------";
			
			//Shows the question and alternatives to the user
			cout << "\n\nWho scored the first Premier League hat-trick?";
			
			//Alternatives
			cout << "\n\nA) Cristiano Ronaldo.";
			cout << "\nB) Wayne Rooney.";
			cout << "\nC) Eric Cantona.";
			cout << "\nD) Thierry Henry.";
			
			//Option list header - Separation
			cout << "\n\n----------------------------------\n";
			cout << "   LIST OF OPTIONS";
			cout << "\n----------------------------------";
			
			//Alternatives to choose
			cout << "\n\n1 - ANSWER.";
			cout << "\n2 - SKIP.";
			cout << "\n\nCHOOSE ONE OF THE ALTERNATIVES: ";
			cin >> Choice;
			
			//CONDITIONAL "IF" for choices - ANSWER
			if(Choice == 1){
				cout << "\nWhat is the correct answer? ";
				cin >> Answers;
				if((Answers == 'c') || (Answers == 'C')){
					cout << "\nRight answer!";
					Hits++;
					MediumHits++;
					
					//Explanation of the answer 
					cout << "\n\nEXPLANATION: Eric Cantona scored his first Premier League hat-trick while play-\ning for Leeds United on 25 August 1992.";
					
				}else{
					cout << "\nIncorrect answer!!";
					cout << "\nCorrect answer: Letter C";
					Misses++;
					
					//EXPLICAÇÃO DA RESPOSTA 
					cout << "\n\nEXPLANATION: Eric Cantona scored his first Premier League hat-trick while play-\ning for Leeds United on 25 August 1992.";
				}
				
				//Shows that the question has been answered
				QuestionAnswered++;
				
				//Skip to the next question
				cout << "\n-------------------------------------------------------------------------------\n";
				getchar();
				cout << "\nPress \"enter\" to continue...";
				getchar();
				system("CLS");
			}
			
			//CONDITIONAL "IF" for choices - SKIP
			if(Choice == 2){
				SkippedQuestions++;
				cout << "\n\nPress \"enter\" to skip the question";
				getchar();
				//To clear the screen and go to the next question 
				getchar();
				system("CLS");
			}
		
		//QUESTION 02 - MEDIUM
		case 1:
			
			//Shows the number of the question and its level
			cout << "----------------------------------\n";
			cout << "   Question n° " << Question + 1 << " Level: Medium.";
			cout << "\n----------------------------------";
			
			//Shows the question and alternatives to the user
			cout << "\n\nWhich metal whose chemical symbol is Au?";
			
			//Alternatives
			cout << "\n\nA) Gold.";
			cout << "\nB) Copper.";
			cout << "\nC) Silver.";
			cout << "\nD) Magnesium.";
			
			//Option list header - Separation
			cout << "\n\n----------------------------------\n";
			cout << "   LIST OF OPTIONS";
			cout << "\n----------------------------------";
			
			//Alternatives to choose
			cout << "\n\n1 - ANSWER.";
			cout << "\n2 - SKIP.";
			cout << "\n\nCHOOSE ONE OF THE ALTERNATIVES: ";
			cin >> Choice;
			
			//CONDITIONAL "IF" for choices - ANSWER
			if(Choice == 1){
				cout << "\nWhat is the correct answer? ";
				cin >> Answers;
				if((Answers == 'a') || (Answers == 'A')){
					cout << "\nRight answer!";
					Hits++;
					MediumHits++;
					
					//Explanation of the answer 
					cout << "\n\nEXPLANATION: Gold is a chemical element with the symbol Au (from Latin: aurum)";
					cout << "\nand atomic number 79, making it one of the higher atomic number elements that\noccur naturally.";
					
				}else{
					cout << "\nIncorrect answer!!";
					cout << "\nCorrect answer: Letter A";
					Misses++;
					
					//Explanation of the answer 
					cout << "\n\nEXPLANATION: Gold is a chemical element with the symbol Au (from Latin: aurum)";
					cout << "\nand atomic number 79, making it one of the higher atomic number elements that\noccur naturally.";
				}
				
				//Shows that the question has been answered
				QuestionAnswered++;
				
				//Skip to the next question
				cout << "\n-------------------------------------------------------------------------------\n";
				getchar();
				cout << "\nPress \"enter\" to continue...";
				getchar();
				system("CLS");
			}
			
			//CONDITIONAL "IF" for choices - SKIP
			if(Choice == 2){
				SkippedQuestions++;
				cout << "\n\nPress \"enter\" to skip the question";
				getchar();
				//To clear the screen and go to the next question 
				getchar();
				system("CLS");
			}
			
		//QUESTION 03 - MEDIUM
		case 2:
			
			//Shows the number of the question and its level
			cout << "----------------------------------\n";
			cout << "   Question n° " << Question + 2 << " Level: Medium.";
			cout << "\n----------------------------------";
			
			//Shows the question and alternatives to the user
			cout << "\nWho painted the ceiling of the Sistine Chapel?";
			
			//Alternatives
			cout << "\n\nA) Michelangelo";
			cout << "\nB) Leonardo da Vinci.";
			cout << "\nC) Raffaello Sanzio.";
			cout << "\nD) Donatello.";
			
			//Option list header - Separation
			cout << "\n\n----------------------------------\n";
			cout << "   LIST OF OPTIONS";
			cout << "\n----------------------------------";
			
			//Alternatives to choose
			cout << "\n\n1 - ANSWER.";
			cout << "\n2 - SKIP.";
			cout << "\n\nCHOOSE ONE OF THE ALTERNATIVES: ";
			cin >> Choice;
			
			//CONDITIONAL "IF" for choices - ANSWER
			if(Choice == 1){
				cout << "\nWhat is the correct answer? ";
				cin >> Answers;
				if((Answers == 'a') || (Answers == 'A')){
					cout << "\nRight answer!";
					Hits++;
					MediumHits++;
					
					//Explanation of the answer 
					cout << "\n\nEXPLANATION: Michelangelo (1475-1564) was an Italian painter, sculptor and architect. He is responsible for painting, during the years 1508 and 1512, the ceil-\ning of the Sistine Chapel in the Vatican.";
					
				}else{
					cout << "\nIncorrect answer!!";
					cout << "\nCorrect answer: Letter A";
					Misses++;
					
					//Explanation of the answer 
					cout << "\n\nEXPLANATION: Michelangelo (1475-1564) was an Italian painter, sculptor and architect. He is responsible for painting, during the years 1508 and 1512, the ceil-\ning of the Sistine Chapel in the Vatican.";
				}
				
				//Shows that the question has been answered
				QuestionAnswered++;
				
				//Skip to the next question
				cout << "\n-------------------------------------------------------------------------------\n";
				getchar();
				cout << "\nPress \"enter\" to continue...";
				getchar();
				system("CLS");
			}
			
			//CONDITIONAL "IF" for choices - SKIP
			if(Choice == 2){
				SkippedQuestions++;
				cout << "\n\nPress \"enter\" to skip the question";
				getchar();
				//To clear the screen and go to the next question 
				getchar();
				system("CLS");
			}
		
		//QUESTION 04 - MEDIUM
		case 3:
			
			//Shows the number of the question and its level
			cout << "----------------------------------\n";
			cout << "   Question n° " << Question + 3 << " Level: Medium.";
			cout << "\n----------------------------------";
			
			//Shows the question and alternatives to the user
			cout << "\n\nWhat is the science that studies the Earth's atmosphere and climatology?";
			
			//Alternatives
			cout << "\n\nA) Astronomy.";
			cout << "\nB) Horology.";
			cout << "\nC) Meteorology.";
			cout << "\nD) Atmospheric dispersion.";
			
			//Option list header - Separation
			cout << "\n\n----------------------------------\n";
			cout << "   LIST OF OPTIONS";
			cout << "\n----------------------------------";
			
			//Alternatives to choose
			cout << "\n\n1 - ANSWER.";
			cout << "\n2 - SKIP.";
			cout << "\n\nCHOOSE ONE OF THE ALTERNATIVES: ";
			cin >> Choice;
			
			//CONDITIONAL "IF" for choices - ANSWER
			if(Choice == 1){
				cout << "\nWhat is the correct answer? ";
				cin >> Answers;
				if((Answers == 'c') || (Answers == 'C')){
					cout << "\nRight answer!";
					Hits++;
					MediumHits++;
					
					//Explanation of the answer 
					cout << "\n\nEXPLANATION: Meteorology is a science that studies the phenomena that occur in \nthe Earth's atmosphere, with a focus on climate and weather forecasting.";
					
				}else{
					cout << "\nIncorrect answer!!";
					cout << "\nCorrect answer: Letter C";
					Misses++;
					
					//Explanation of the answer 
					cout << "\n\nEXPLANATION: Meteorology is a science that studies the phenomena that occur in \nthe Earth's atmosphere, with a focus on climate and weather forecasting.";
				}
				
				//Shows that the question has been answered
				QuestionAnswered++;
				
				//Skip to the next question
				cout << "\n-------------------------------------------------------------------------------\n";
				getchar();
				cout << "\nPress \"enter\" to continue...";
				getchar();
				system("CLS");
			}
			
			//CONDITIONAL "IF" for choices - SKIP
			if(Choice == 2){
				SkippedQuestions++;
				cout << "\n\nPress \"enter\" to skip the question";
				getchar();
				//To clear the screen and go to the next question 
				getchar();
				system("CLS");
			}
			
		//QUESTION 05 - MEDIUM
		case 4:
			
			//Shows the number of the question and its level
			cout << "----------------------------------\n";
			cout << "   Question n° " << Question + 4 << " Level: Medium.";
			cout << "\n----------------------------------";
			
			//Shows the question and alternatives to the user
			cout << "\n\nWhat energy source is ethanol produced from?";
			
			//Alternatives
			cout << "\n\nA) Solar.";
			cout << "\nB) Biomass.";
			cout << "\nC) Wind.";
			cout << "\nD) Geothermal.";
			
			//Option list header - Separation
			cout << "\n\n----------------------------------\n";
			cout << "   LIST OF OPTIONS";
			cout << "\n----------------------------------";
			
			//Alternatives to choose
			cout << "\n\n1 - ANSWER.";
			cout << "\n2 - SKIP.";
			cout << "\n\nCHOOSE ONE OF THE ALTERNATIVES: ";
			cin >> Choice;
			
			//CONDITIONAL "IF" for choices - ANSWER
			if(Choice == 1){
				cout << "\nWhat is the correct answer? ";
				cin >> Answers;
				if((Answers == 'b') || (Answers == 'B')){
					cout << "\nRight answer!";
					Hits++;
					MediumHits++;
					
					//Explanation of the answer 
					cout << "\n\nEXPLANATION: Ethanol can be produced from sugar cane, beets and corn, that is, \nenergy that comes from organic matter.";
					
				}else{
					cout << "\nIncorrect answer!!";
					cout << "\nCorrect answer: Letter B";
					Misses++;
					
					//Explanation of the answer 
					cout << "\n\nEXPLANATION: Ethanol can be produced from sugar cane, beets and corn, that is, \nenergy that comes from organic matter.";
				}
				
				//Shows that the question has been answered
				QuestionAnswered++;
				
				//Skip to the next question
				cout << "\n-------------------------------------------------------------------------------\n";
				getchar();
				cout << "\nPress \"enter\" to continue...";
				getchar();
				system("CLS");
			}
			
			//CONDITIONAL "IF" for choices - SKIP
			if(Choice == 2){
				SkippedQuestions++;
				cout << "\n\nPress \"enter\" to skip the question";
				getchar();
				//To clear the screen and go to the next question 
				getchar();
				system("CLS");
			}
			
		//QUESTION 06 - MEDIUM
		case 5:
			
			//Shows the number of the question and its level
			cout << "----------------------------------\n";
			cout << "   Question n° " << Question + 5 << " Level: Medium.";
			cout << "\n----------------------------------";
			
			//Shows the question and alternatives to the user
			cout << "\n\nWhich footballer has the most Instagram followers in the world - as of 2020?";
			
			//Alternatives
			cout << "\n\nA) Pelé.";
			cout << "\nB) Léo Messi.";
			cout << "\nC) Neymar.";
			cout << "\nD) Cristiano Ronaldo.";
			
			//Option list header - Separation
			cout << "\n\n----------------------------------\n";
			cout << "   LIST OF OPTIONS";
			cout << "\n----------------------------------";
			
			//Alternatives to choose
			cout << "\n\n1 - ANSWER.";
			cout << "\n2 - SKIP.";
			cout << "\n\nCHOOSE ONE OF THE ALTERNATIVES: ";
			cin >> Choice;
			
			//CONDITIONAL "IF" for choices - ANSWER
			if(Choice == 1){
				cout << "\nWhat is the correct answer? ";
				cin >> Answers;
				if((Answers == 'd') || (Answers == 'D')){
					cout << "\nRight answer!";
					Hits++;
					MediumHits++;
					
					//Explanation of the answer 
					cout << "\n\nEXPLANATION: Footballer Cristiano Ronaldo is the most-followed athlete on the \nphoto-sharing platform Instagram with over 197 million followers.";
					
				}else{
					cout << "\nIncorrect answer!!";
					cout << "\nCorrect answer: Letter D";
					Misses++;
					
					//Explanation of the answer 
					cout << "\n\nEXPLANATION: Footballer Cristiano Ronaldo is the most-followed athlete on the \nphoto-sharing platform Instagram with over 197 million followers.";
				}
				
				//Shows that the question has been answered
				QuestionAnswered++;
				
				//Skip to the next question
				cout << "\n-------------------------------------------------------------------------------\n";
				getchar();
				cout << "\nPress \"enter\" to continue...";
				getchar();
				system("CLS");
			}
			
			//CONDITIONAL "IF" for choices - SKIP
			if(Choice == 2){
				SkippedQuestions++;
				cout << "\n\nPress \"enter\" to skip the question";
				getchar();
				//To clear the screen and go to the next question 
				getchar();
				system("CLS");
			}
			
		//QUESTION 07 - MEDIUM
		case 6:
			
			//Shows the number of the question and its level
			cout << "----------------------------------\n";
			cout << "   Question n° " << Question + 6 << " Level: Medium.";
			cout << "\n----------------------------------";
			
			//Shows the question and alternatives to the user
			cout << "\n\nWhich unit measures the intensity of the sound?";
			
			//Alternatives
			cout << "\n\nA) Decibels.";
			cout << "\nB) Frequency.";
			cout << "\nC) Hertz.";
			cout << "\nD) Compass.";
			
			//Option list header - Separation
			cout << "\n\n----------------------------------\n";
			cout << "   LIST OF OPTIONS";
			cout << "\n----------------------------------";
			
			//Alternatives to choose
			cout << "\n\n1 - ANSWER.";
			cout << "\n2 - SKIP.";
			cout << "\n\nCHOOSE ONE OF THE ALTERNATIVES: ";
			cin >> Choice;
			
			//CONDITIONAL "IF" for choices - ANSWER
			if(Choice == 1){
				cout << "\nWhat is the correct answer? ";
				cin >> Answers;
				if((Answers == 'a') || (Answers == 'A')){
					cout << "\nRight answer!";
					Hits++;
					MediumHits++;
					
					//Explanation of the answer 
					cout << "\n\nEXPLANATION: Around the world, decibels are used to measure the sound level, \nwhich is done using a logarithmic scale.";
					
				}else{
					cout << "\nIncorrect answer!!";
					cout << "\nCorrect answer: Letter A";
					Misses++;
					
					//Explanation of the answer 
					cout << "\n\nEXPLANATION: Around the world, decibels are used to measure the sound level, \nwhich is done using a logarithmic scale.";
				}
				
				//Shows that the question has been answered
				QuestionAnswered++;
				
				//Skip to the next question
				cout << "\n-------------------------------------------------------------------------------\n";
				getchar();
				cout << "\nPress \"enter\" to continue...";
				getchar();
				system("CLS");
			}
			
			//CONDITIONAL "IF" for choices - SKIP
			if(Choice == 2){
				SkippedQuestions++;
				cout << "\n\nPress \"enter\" to skip the question";
				getchar();
				//To clear the screen and go to the next question 
				getchar();
				system("CLS");
			}
			
		//QUESTION 08 - MEDIUM
		case 7:
			
			//Shows the number of the question and its level
			cout << "----------------------------------\n";
			cout << "   Question n° " << Question + 7 << " Level: Medium.";
			cout << "\n----------------------------------";
			
			//Shows the question and alternatives to the user
			cout << "\n\nWhat is the longest river in the world?";
			
			//Alternatives
			cout << "\n\nA) River Nile.";
			cout << "\nB) Amazon River.";
			cout << "\nC) Yangtze River.";
			cout << "\nD) Yellow River.";
			
			//Option list header - Separation
			cout << "\n\n----------------------------------\n";
			cout << "   LIST OF OPTIONS";
			cout << "\n----------------------------------";
			
			//Alternatives to choose
			cout << "\n\n1 - ANSWER.";
			cout << "\n2 - SKIP.";
			cout << "\n\nCHOOSE ONE OF THE ALTERNATIVES: ";
			cin >> Choice;
			
			//CONDITIONAL "IF" for choices - ANSWER
			if(Choice == 1){
				cout << "\nWhat is the correct answer? ";
				cin >> Answers;
				if((Answers == 'a') || (Answers == 'A')){
					cout << "\nRight answer!";
					Hits++;
					MediumHits++;
					
					//Explanation of the answer 
					cout << "\n\nEXPLANATION: About 6,650 km (4,130 mi) long, its drainage basin covers eleven";
					cout << "\ncountries: Tanzania, Uganda, Rwanda, Burundi, the Democratic Republic of the Congo, Kenya, Ethiopia, Eritrea, South Sudan, Republic of the Sudan, and Egypt. In particular, the Nile is the primary water source of Egypt and Sudan.";
					
				}else{
					cout << "\nIncorrect answer!!";
					cout << "\nCorrect answer: Letter A";
					Misses++;
					
					//Explanation of the answer 
					cout << "\n\nEXPLANATION: About 6,650 km (4,130 mi) long, its drainage basin covers eleven";
					cout << "\ncountries: Tanzania, Uganda, Rwanda, Burundi, the Democratic Republic of the Congo, Kenya, Ethiopia, Eritrea, South Sudan, Republic of the Sudan, and Egypt. In particular, the Nile is the primary water source of Egypt and Sudan.";
				}
				
				//Shows that the question has been answered
				QuestionAnswered++;
				
				//Skip to the next question
				cout << "\n-------------------------------------------------------------------------------\n";
				getchar();
				cout << "\nPress \"enter\" to continue...";
				getchar();
				system("CLS");
			}
			
			//CONDITIONAL "IF" for choices - SKIP
			if(Choice == 2){
				SkippedQuestions++;
				cout << "\n\nPress \"enter\" to skip the question";
				getchar();
				//To clear the screen and go to the next question 
				getchar();
				system("CLS");
			}
			
		//QUESTION 09 - MEDIUM
		case 8:
			
			//Shows the number of the question and its level
			cout << "----------------------------------\n";
			cout << "   Question n° " << Question + 8 << " Level: Medium.";
			cout << "\n----------------------------------";
			
			//Shows the question and alternatives to the user
			cout << "\n\nHow long does sunlight take to reach Earth?";
			
			//Alternatives
			cout << "\n\nA) 12 minutes.";
			cout << "\nB) 1 day.";
			cout << "\nC) 8 minutes.";
			cout << "\nD) 12 hours.";
			
			//Option list header - Separation
			cout << "\n\n----------------------------------\n";
			cout << "   LIST OF OPTIONS";
			cout << "\n----------------------------------";
			
			//Alternatives to choose
			cout << "\n\n1 - ANSWER.";
			cout << "\n2 - SKIP.";
			cout << "\n\nCHOOSE ONE OF THE ALTERNATIVES: ";
			cin >> Choice;
			
			//CONDITIONAL "IF" for choices - ANSWER
			if(Choice == 1){
				cout << "\nWhat is the correct answer? ";
				cin >> Answers;
				if((Answers == 'c') || (Answers == 'C')){
					cout << "\nRight answer!";
					Hits++;
					MediumHits++;
					
					//Explanation of the answer 
					cout << "\n\nEXPLANATION: This is a question that is based on optics. It is calculated based on the distance from the Sun to the Earth, which is approx. 150 000 000 km";
					cout << " con-\nsidering that the speed of light in a vacuum is 300 000 km/s. 150 000 000 divi-";
					cout << "\nded by 300 000 is equal to 500 seconds, that is, 8.33 minutes.";
					
				}else{
					cout << "\nIncorrect answer!!";
					cout << "\nCorrect answer: Letter C";
					Misses++;
					
					//Explanation of the answer 
					cout << "\n\nEXPLANATION: This is a question that is based on optics. It is calculated based on the distance from the Sun to the Earth, which is approx. 150 000 000 km";
					cout << " con-\nsidering that the speed of light in a vacuum is 300 000 km/s. 150 000 000 divid-";
					cout << "\ned by 300 000 is equal to 500 seconds, that is, 8.33 minutes.";
				}
				
				//Shows that the question has been answered
				QuestionAnswered++;
				
				//Skip to the next question
				cout << "\n-------------------------------------------------------------------------------\n";
				getchar();
				cout << "\nPress \"enter\" to continue...";
				getchar();
				system("CLS");
			}
			
			//CONDITIONAL "IF" for choices - SKIP
			if(Choice == 2){
				SkippedQuestions++;
				cout << "\n\nPress \"enter\" to skip the question";
				getchar();
				//To clear the screen and go to the next question 
				getchar();
				system("CLS");
			}
			
		//QUESTION 10 - MEDIUM
		case 9:
			
			//Shows the number of the question and its level
			cout << "----------------------------------\n";
			cout << "   Question n° " << Question + 9 << " Level: Medium.";
			cout << "\n----------------------------------";
			
			//Shows the question and alternatives to the user
			cout << "\n\nWhich nationality was the polar explorer Roald Amundsen?";
			
			//Alternatives
			cout << "\n\nA) Austrian.";
			cout << "\nB) Danish.";
			cout << "\nC) Norwegian.";
			cout << "\nD) American.";
			
			//Option list header - Separation
			cout << "\n\n----------------------------------\n";
			cout << "   LIST OF OPTIONS";
			cout << "\n----------------------------------";
			
			//Alternatives to choose
			cout << "\n\n1 - ANSWER.";
			cout << "\n2 - SKIP.";
			cout << "\n\nCHOOSE ONE OF THE ALTERNATIVES: ";
			cin >> Choice;
			
			//CONDITIONAL "IF" for choices - ANSWER
			if(Choice == 1){
				cout << "\nWhat is the correct answer? ";
				cin >> Answers;
				if((Answers == 'c') || (Answers == 'C')){
					cout << "\nRight answer!";
					Hits++;
					MediumHits++;
					
					//Explanation of the answer 
					cout << "\n\nEXPLANATION: Roald Engelbregt Gravning Amundsen was a Norwegian explorer of the polar regions, who led the first expedition to reach the South Pole on December 14, 1911 and using dog sleds for this.";
					
				}else{
					cout << "\nIncorrect answer!!";
					cout << "\nCorrect answer: Letter C";
					Misses++;
					
					//Explanation of the answer 
					cout << "\n\nEXPLANATION: Roald Engelbregt Gravning Amundsen was a Norwegian explorer of the polar regions, who led the first expedition to reach the South Pole on December 14, 1911 and using dog sleds for this.";
				}
				
				//Shows that the question has been answered
				QuestionAnswered++;
				
				//Skip to the next question
				cout << "\n-------------------------------------------------------------------------------\n";
				getchar();
				cout << "\nPress \"enter\" to continue...";
				getchar();
				system("CLS");
			}
			
			//CONDITIONAL "IF" for choices - SKIP
			if(Choice == 2){
				SkippedQuestions++;
				cout << "\n\nPress \"enter\" to skip the question";
				getchar();
				//To clear the screen and go to the next question 
				getchar();
				system("CLS");
			}
			
			/* AS THIS IS THE LAST QUESTION OF THIS LEVEL, WE MUST BREAK THE SWITCH. 
			AS EVERY SWITCH CORRESPONDS TO A LEVEL OF DIFFICULTY */
			
			//Skip to the next question / Break the case
			break;
	}
	
	//Clear the screen
	system("CLS");
	
	//Welcomes and congratulates the user
	cout << "================= CONGRATULATIONS, LEVEL COMPLETED =============================\n";
	cout << "\nCongratulations " << Name << "! You just passed the Medium level of our challenge.";
	
	//Makes the program closer to the user, making a joke
	cout << "\n\n-------------------------------------------------------------------------------\n";
	cout << "\nAre you ready for the next level?\n";
	cout << "I hope you are! Oh, and you’ve already completed 66.66...% of our Challenge.\n\n";
	cout << "-------------------------------------------------------------------------------\n";
	
	//Explains the game and gives the possibility to continue
	cout << "\nCongratulations, good luck and good rest of the game! (There is little left!)";
	cout << "\n\nPress \"enter\" to proceed...";
	getchar();
	getchar();
	
	//Limpa a tela
	system("CLS");
	
	//PART OF QUESTIONS - SWITCH 03 - HARD LEVEL
	switch(Hard){
		
		//QUESTION 01 - HARD
		case 0:
			
			//Shows the number of the question and its level
			cout << "----------------------------------\n";
			cout << "   Question n° " << Question << " Level: Hard.";
			cout << "\n----------------------------------";
			
			//Shows the question and alternatives to the user
			cout << "\n\nWhich vitamin is the only one that you will not find in an egg?";
			
			//Alternatives
			cout << "\n\nA) Vitamin B12.";
			cout << "\nB) Vitamin C.";
			cout << "\nC) Vitamin D.";
			cout << "\nD) Vitamin E.";
			
			//Option list header - Separation
			cout << "\n\n----------------------------------\n";
			cout << "   LIST OF OPTIONS";
			cout << "\n----------------------------------";
			
			//Alternatives to choose
			cout << "\n\n1 - ANSWER.";
			cout << "\n2 - SKIP.";
			cout << "\n\nCHOOSE ONE OF THE ALTERNATIVES: ";
			cin >> Choice;
			
			//CONDITIONAL "IF" for choices - ANSWER
			if(Choice == 1){
				cout << "\nWhat is the correct answer? ";
				cin >> Answers;
				if((Answers == 'b') || (Answers == 'B')){
					cout << "\nRight answer!";
					Hits++;
					HardHits++;
					
					//Explanation of the answer 
					cout << "\n\nEXPLANATION: A standard egg contains 11 different vitamins and nutrients, but \nnone of these are Vitamin C.";
					
				}else{
					cout << "\nIncorrect answer!!";
					cout << "\nCorrect answer: Letter B";
					Misses++;
					
					//EXPLICAÇÃO DA RESPOSTA 
					cout << "\n\nEXPLANATION: A standard egg contains 11 different vitamins and nutrients, but \nnone of these are Vitamin C.";
				}
				
				//Shows that the question has been answered
				QuestionAnswered++;
				
				//Skip to the next question
				cout << "\n-------------------------------------------------------------------------------\n";
				getchar();
				cout << "\nPress \"enter\" to continue...";
				getchar();
				system("CLS");
			}
			
			//CONDITIONAL "IF" for choices - SKIP
			if(Choice == 2){
				SkippedQuestions++;
				cout << "\n\nPress \"enter\" to skip the question";
				getchar();
				//To clear the screen and go to the next question 
				getchar();
				system("CLS");
			}
		
		//QUESTION 02 - HARD
		case 1:
			
			//Shows the number of the question and its level
			cout << "----------------------------------\n";
			cout << "   Question n° " << Question + 1 << " Level: Hard.";
			cout << "\n----------------------------------";
			
			//Shows the question and alternatives to the user
			cout << "\n\nWhat was the mathematician and geographer who calculated the Earth's perimeter in 240 BC?";
			
			//Alternatives
			cout << "\n\nA) Socrates.";
			cout << "\nB) Sophocles.";
			cout << "\nC) René Descartes.";
			cout << "\nD) Eratosthenes.";
			
			//Option list header - Separation
			cout << "\n\n----------------------------------\n";
			cout << "   LIST OF OPTIONS";
			cout << "\n----------------------------------";
			
			//Alternatives to choose
			cout << "\n\n1 - ANSWER.";
			cout << "\n2 - SKIP.";
			cout << "\n\nCHOOSE ONE OF THE ALTERNATIVES: ";
			cin >> Choice;
			
			//CONDITIONAL "IF" for choices - ANSWER
			if(Choice == 1){
				cout << "\nWhat is the correct answer? ";
				cin >> Answers;
				if((Answers == 'd') || (Answers == 'D')){
					cout << "\nRight answer!";
					Hits++;
					HardHits++;
					
					//Explanation of the answer 
					cout << "\n\nEXPLANATION: Based on the equinoxes and solstices, during the period in which he";
					cout << "lived in Alexandria, Eratosthenes managed to make a calculation based on the po-";
					cout << "sition of the Sun and the zenith.";
					
				}else{
					cout << "\nIncorrect answer!!";
					cout << "\nCorrect answer: Letter D";
					Misses++;
					
					//Explanation of the answer 
					cout << "\n\nEXPLANATION: Based on the equinoxes and solstices, during the period in which he";
					cout << "lived in Alexandria, Eratosthenes managed to make a calculation based on the po-";
					cout << "sition of the Sun and the zenith.";
				}
				
				//Shows that the question has been answered
				QuestionAnswered++;
				
				//Skip to the next question
				cout << "\n-------------------------------------------------------------------------------\n";
				getchar();
				cout << "\nPress \"enter\" to continue...";
				getchar();
				system("CLS");
			}
			
			//CONDITIONAL "IF" for choices - SKIP
			if(Choice == 2){
				SkippedQuestions++;
				cout << "\n\nPress \"enter\" to skip the question";
				getchar();
				//To clear the screen and go to the next question 
				getchar();
				system("CLS");
			}
			
		//QUESTION 03 - HARD
		case 2:
			
			//Shows the number of the question and its level
			cout << "----------------------------------\n";
			cout << "   Question n° " << Question + 2 << " Level: Hard.";
			cout << "\n----------------------------------";
			
			//Shows the question and alternatives to the user
			cout << "\n\nNormally, how many liters of blood does a person have? On average, how many are taken out of a blood donation?";
			
			//Alternatives
			cout << "\n\nA) It has between 2 to 4 liters. 450 milliliters are removed.";
			cout << "\nB) It has between 4 to 6 liters. 450 milliliters are removed.";
			cout << "\nC) It has 10 liters. 2 liters are removed.";
			cout << "\nD) It has 7 liters. 1.5 liters are removed.";
			
			//Option list header - Separation
			cout << "\n\n----------------------------------\n";
			cout << "   LIST OF OPTIONS";
			cout << "\n----------------------------------";
			
			//Alternatives to choose
			cout << "\n\n1 - ANSWER.";
			cout << "\n2 - SKIP.";
			cout << "\n\nCHOOSE ONE OF THE ALTERNATIVES: ";
			cin >> Choice;
			
			//CONDITIONAL "IF" for choices - ANSWER
			if(Choice == 1){
				cout << "\nWhat is the correct answer? ";
				cin >> Answers;
				if((Answers == 'b') || (Answers == 'B')){
					cout << "\nRight answer!";
					Hits++;
					HardHits++;
					
					//Explanation of the answer 
					cout << "\n\nEXPLANATION: Blood volume is between 7% and 8% body weight. Thus, an adult weighing 50 and 80 kilos can have between 4 and 6 liters of blood, respectively.";
					
				}else{
					cout << "\nIncorrect answer!!";
					cout << "\nCorrect answer: Letter B";
					Misses++;
					
					//Explanation of the answer 
					cout << "\n\nEXPLANATION: Blood volume is between 7% and 8% body weight. Thus, an adult weighing 50 and 80 kilos can have between 4 and 6 liters of blood, respectively.";
				}
				
				//Shows that the question has been answered
				QuestionAnswered++;
				
				//Skip to the next question
				cout << "\n-------------------------------------------------------------------------------\n";
				getchar();
				cout << "\nPress \"enter\" to continue...";
				getchar();
				system("CLS");
			}
			
			//CONDITIONAL "IF" for choices - SKIP
			if(Choice == 2){
				SkippedQuestions++;
				cout << "\n\nPress \"enter\" to skip the question";
				getchar();
				//To clear the screen and go to the next question 
				getchar();
				system("CLS");
			}
		
		//QUESTION 04 - HARD
		case 3:
			
			//Shows the number of the question and its level
			cout << "----------------------------------\n";
			cout << "   Question n° " << Question + 3 << " Level: Hard.";
			cout << "\n----------------------------------";
			
			//Shows the question and alternatives to the user
			cout << "\n\nWhat are the names of the three wise men?";
			
			//Alternatives
			cout << "\n\nA) Melchior, Gaspar and Balthazar.";
			cout << "\nB) Gaspar, Matthew and Joseph.";
			cout << "\nC) Belchior, Noah and Galileu.";
			cout << "\nD) Gabriel, Benjamin and Belchior.";
			
			//Option list header - Separation
			cout << "\n\n----------------------------------\n";
			cout << "   LIST OF OPTIONS";
			cout << "\n----------------------------------";
			
			//Alternatives to choose
			cout << "\n\n1 - ANSWER.";
			cout << "\n2 - SKIP.";
			cout << "\n\nCHOOSE ONE OF THE ALTERNATIVES: ";
			cin >> Choice;
			
			//CONDITIONAL "IF" for choices - ANSWER
			if(Choice == 1){
				cout << "\nWhat is the correct answer? ";
				cin >> Answers;
				if((Answers == 'a') || (Answers == 'A')){
					cout << "\nRight answer!";
					Hits++;
					HardHits++;
					
					//Explanation of the answer 
					cout << "\n\nEXPLANATION: The three wise men are personalities who visited Jesus after his";
					cout << "\nbirth. They offered some items as a way to gift the Savior's arrival. So Melchi-";
					cout << "or took gold, Gaspar incense, and Balthazar myrrh.";
					
				}else{
					cout << "\nIncorrect answer!!";
					cout << "\nCorrect answer: Letter A";
					Misses++;
					
					//Explanation of the answer 
					cout << "\n\nEXPLANATION: The three wise men are personalities who visited Jesus after his";
					cout << "\nbirth. They offered some items as a way to gift the Savior's arrival. So Melchi-";
					cout << "or took gold, Gaspar incense, and Balthazar myrrh.";
				}
				
				//Shows that the question has been answered
				QuestionAnswered++;
				
				//Skip to the next question
				cout << "\n-------------------------------------------------------------------------------\n";
				getchar();
				cout << "\nPress \"enter\" to continue...";
				getchar();
				system("CLS");
			}
			
			//CONDITIONAL "IF" for choices - SKIP
			if(Choice == 2){
				SkippedQuestions++;
				cout << "\n\nPress \"enter\" to skip the question";
				getchar();
				//To clear the screen and go to the next question 
				getchar();
				system("CLS");
			}
			
		//QUESTION 05 - Hard
		case 4:
			
			//Shows the number of the question and its level
			cout << "----------------------------------\n";
			cout << "   Question n° " << Question + 4 << " Level: Hard.";
			cout << "\n----------------------------------";
			
			//Shows the question and alternatives to the user
			cout << "\n\nWho was the first man to set foot on the moon? What year did it happen?";
			
			//Alternatives
			cout << "\n\nA) Yuri Gagarin, in 1961.";
			cout << "\nB) Buzz Aldrin, in 1969.";
			cout << "\nC) Neil Armstrong, in 1969.";
			cout << "\nD) Charles Duke, in 1971.";
			
			//Option list header - Separation
			cout << "\n\n----------------------------------\n";
			cout << "   LIST OF OPTIONS";
			cout << "\n----------------------------------";
			
			//Alternatives to choose
			cout << "\n\n1 - ANSWER.";
			cout << "\n2 - SKIP.";
			cout << "\n\nCHOOSE ONE OF THE ALTERNATIVES: ";
			cin >> Choice;
			
			//CONDITIONAL "IF" for choices - ANSWER
			if(Choice == 1){
				cout << "\nWhat is the correct answer? ";
				cin >> Answers;
				if((Answers == 'c') || (Answers == 'C')){
					cout << "\nRight answer!";
					Hits++;
					HardHits++;
					
					//Explanation of the answer 
					cout << "\n\nEXPLANATION: Neil Armstrong (1930-2012) was an engineer and astronaut, being the";
					cout << "first man to step on the moon in 1969 on the Apollo 11 mission, alongside the \nastronauts: Michael Collins and Edwin 'Buzz' Aldrian.";
					
				}else{
					cout << "\nIncorrect answer!!";
					cout << "\nCorrect answer: Letter C";
					Misses++;
					
					//Explanation of the answer 
					cout << "\n\nEXPLANATION: Neil Armstrong (1930-2012) was an engineer and astronaut, being the";
					cout << "first man to step on the moon in 1969 on the Apollo 11 mission, alongside the \nastronauts: Michael Collins and Edwin 'Buzz' Aldrian.";
				}
				
				//Shows that the question has been answered
				QuestionAnswered++;
				
				//Skip to the next question
				cout << "\n-------------------------------------------------------------------------------\n";
				getchar();
				cout << "\nPress \"enter\" to continue...";
				getchar();
				system("CLS");
			}
			
			//CONDITIONAL "IF" for choices - SKIP
			if(Choice == 2){
				SkippedQuestions++;
				cout << "\n\nPress \"enter\" to skip the question";
				getchar();
				//To clear the screen and go to the next question 
				getchar();
				system("CLS");
			}
			
		//QUESTION 06 - HARD
		case 5:
			
			//Shows the number of the question and its level
			cout << "----------------------------------\n";
			cout << "   Question n° " << Question + 5 << " Level: Hard.";
			cout << "\n----------------------------------";
			
			//Shows the question and alternatives to the user
			cout << "\n\nHow many degrees does it take for two angles to be complementary?";
			
			//Alternatives
			cout << "\n\nA) 45°.";
			cout << "\nB) 60°.";
			cout << "\nC) 90°.";
			cout << "\nD) 180°.";
			
			//Option list header - Separation
			cout << "\n\n----------------------------------\n";
			cout << "   LIST OF OPTIONS";
			cout << "\n----------------------------------";
			
			//Alternatives to choose
			cout << "\n\n1 - ANSWER.";
			cout << "\n2 - SKIP.";
			cout << "\n\nCHOOSE ONE OF THE ALTERNATIVES: ";
			cin >> Choice;
			
			//CONDITIONAL "IF" for choices - ANSWER
			if(Choice == 1){
				cout << "\nWhat is the correct answer? ";
				cin >> Answers;
				if((Answers == 'c') || (Answers == 'C')){
					cout << "\nRight answer!";
					Hits++;
					HardHits++;
					
					//Explanation of the answer 
					cout << "\n\nEXPLANATION: The complementary angles are angles that together add up to 90º.";
					
				}else{
					cout << "\nIncorrect answer!!";
					cout << "\nCorrect answer: Letter C";
					Misses++;
					
					//Explanation of the answer 
					cout << "\n\nEXPLANATION: The complementary angles are angles that together add up to 90º.";
				}
				
				//Shows that the question has been answered
				QuestionAnswered++;
				
				//Skip to the next question
				cout << "\n-------------------------------------------------------------------------------\n";
				getchar();
				cout << "\nPress \"enter\" to continue...";
				getchar();
				system("CLS");
			}
			
			//CONDITIONAL "IF" for choices - SKIP
			if(Choice == 2){
				SkippedQuestions++;
				cout << "\n\nPress \"enter\" to skip the question";
				getchar();
				//To clear the screen and go to the next question 
				getchar();
				system("CLS");
			}
			
		//QUESTION 07 - HARD
		case 6:
			
			//Shows the number of the question and its level
			cout << "----------------------------------\n";
			cout << "   Question n° " << Question + 6 << " Level: Hard.";
			cout << "\n----------------------------------";
			
			//Shows the question and alternatives to the user
			cout << "\n\nWhat is the largest land animal?";
			
			//Alternatives
			cout << "\n\nA) African elephant.";
			cout << "\nB) Giraffe.";
			cout << "\nC) Dinosaur.";
			cout << "\nD) White shark.";
			
			//Option list header - Separation
			cout << "\n\n----------------------------------\n";
			cout << "   LIST OF OPTIONS";
			cout << "\n----------------------------------";
			
			//Alternatives to choose
			cout << "\n\n1 - ANSWER.";
			cout << "\n2 - SKIP.";
			cout << "\n\nCHOOSE ONE OF THE ALTERNATIVES: ";
			cin >> Choice;
			
			//CONDITIONAL "IF" for choices - ANSWER
			if(Choice == 1){
				cout << "\nWhat is the correct answer? ";
				cin >> Answers;
				if((Answers == 'a') || (Answers == 'A')){
					cout << "\nRight answer!";
					Hits++;
					HardHits++;
					
					//Explanation of the answer 
					cout << "\n\nEXPLANATION: The African elephant is the largest land animal. It can measure up to 4 meters in height and 7 in length. Its weight can reach up to 8 tons.";
					
				}else{
					cout << "\nIncorrect answer!!";
					cout << "\nCorrect answer: Letter A";
					Misses++;
					
					//Explanation of the answer 
					cout << "\n\nEXPLANATION: The African elephant is the largest land animal. It can measure up to 4 meters in height and 7 in length. Its weight can reach up to 8 tons.";
				}
				
				//Shows that the question has been answered
				QuestionAnswered++;
				
				//Skip to the next question
				cout << "\n-------------------------------------------------------------------------------\n";
				getchar();
				cout << "\nPress \"enter\" to continue...";
				getchar();
				system("CLS");
			}
			
			//CONDITIONAL "IF" for choices - SKIP
			if(Choice == 2){
				SkippedQuestions++;
				cout << "\n\nPress \"enter\" to skip the question";
				getchar();
				//To clear the screen and go to the next question 
				getchar();
				system("CLS");
			}
			
		//QUESTION 08 - HARD
		case 7:
			
			//Shows the number of the question and its level
			cout << "----------------------------------\n";
			cout << "   Question n° " << Question + 7 << " Level: Hard.";
			cout << "\n----------------------------------";
			
			//Shows the question and alternatives to the user
			cout << "\n\nWhat is an algorithm?";
			
			//Alternatives
			cout << "\n\nA) It is the same as a number.";
			cout << "\nB) A numeric set.";
			cout << "\nC) A type of calculation.";
			cout << "\nD) Set of rules necessary to solve a problem or calculation.";
			
			//Option list header - Separation
			cout << "\n\n----------------------------------\n";
			cout << "   LIST OF OPTIONS";
			cout << "\n----------------------------------";
			
			//Alternatives to choose
			cout << "\n\n1 - ANSWER.";
			cout << "\n2 - SKIP.";
			cout << "\n\nCHOOSE ONE OF THE ALTERNATIVES: ";
			cin >> Choice;
			
			//CONDITIONAL "IF" for choices - ANSWER
			if(Choice == 1){
				cout << "\nWhat is the correct answer? ";
				cin >> Answers;
				if((Answers == 'd') || (Answers == 'D')){
					cout << "\nRight answer!";
					Hits++;
					HardHits++;
					
					//Explanation of the answer 
					cout << "\n\nEXPLANATION: An algorithm is a set of rules necessary to solve a problem or cal-culation.";
					cout << "\n\nEXAMPLE: Behind this whole game, there is an algorithm, which is a set of codes.";
					
				}else{
					cout << "\nIncorrect answer!!";
					cout << "\nCorrect answer: Letter D";
					Misses++;
					
					//Explanation of the answer 
					cout << "\n\nEXPLANATION: An algorithm is a set of rules necessary to solve a problem or cal-culation.";
					cout << "\n\nEXAMPLE: Behind this whole game, there is an algorithm, which is a set of codes.";
					
				}
				
				//Shows that the question has been answered
				QuestionAnswered++;
				
				//Skip to the next question
				cout << "\n-------------------------------------------------------------------------------\n";
				getchar();
				cout << "\nPress \"enter\" to continue...";
				getchar();
				system("CLS");
			}
			
			//CONDITIONAL "IF" for choices - SKIP
			if(Choice == 2){
				SkippedQuestions++;
				cout << "\n\nPress \"enter\" to skip the question";
				getchar();
				//To clear the screen and go to the next question 
				getchar();
				system("CLS");
			}
			
		//QUESTION 09 - HARD
		case 8:
			
			//Shows the number of the question and its level
			cout << "----------------------------------\n";
			cout << "   Question n° " << Question + 8 << " Level: Hard.";
			cout << "\n----------------------------------";
			
			//Shows the question and alternatives to the user
			cout << "\n\nHow many decimal places has the number pi?";
			
			//Alternatives
			cout << "\n\nA) Two.";
			cout << "\nB) Hundreds.";
			cout << "\nC) Infinite.";
			cout << "\nD) Thousands.";
			
			//Option list header - Separation
			cout << "\n\n----------------------------------\n";
			cout << "   LIST OF OPTIONS";
			cout << "\n----------------------------------";
			
			//Alternatives to choose
			cout << "\n\n1 - ANSWER.";
			cout << "\n2 - SKIP.";
			cout << "\n\nCHOOSE ONE OF THE ALTERNATIVES: ";
			cin >> Choice;
			
			//CONDITIONAL "IF" for choices - ANSWER
			if(Choice == 1){
				cout << "\nWhat is the correct answer? ";
				cin >> Answers;
				if((Answers == 'c') || (Answers == 'C')){
					cout << "\nRight answer!";
					Hits++;
					HardHits++;
					
					//Explanation of the answer 
					cout << "\n\nEXPLANATION: Over the years, several scholars have dedicated themselves to cal-";
					cout << "\nculating the number pi and have reached the number of 5 billion houses.";
					
				}else{
					cout << "\nIncorrect answer!!";
					cout << "\nCorrect answer: Letter C";
					Misses++;
					
					//Explanation of the answer 
					cout << "\n\nEXPLANATION: Over the years, several scholars have dedicated themselves to cal-";
					cout << "\nculating the number pi and have reached the number of 5 billion houses.";
				}
				
				//Shows that the question has been answered
				QuestionAnswered++;
				
				//Skip to the next question
				cout << "\n-------------------------------------------------------------------------------\n";
				getchar();
				cout << "\nPress \"enter\" to continue...";
				getchar();
				system("CLS");
			}
			
			//CONDITIONAL "IF" for choices - SKIP
			if(Choice == 2){
				SkippedQuestions++;
				cout << "\n\nPress \"enter\" to skip the question";
				getchar();
				//To clear the screen and go to the next question 
				getchar();
				system("CLS");
			}
			
		//QUESTION 10 - HARD
		case 9:
			
			//Shows the number of the question and its level
			cout << "----------------------------------\n";
			cout << "   Question n° " << Question + 9 << " Level: Hard.";
			cout << "\n----------------------------------";
			
			//Shows the question and alternatives to the user
			cout << "\n\nThe six main stars of Friends appeared in all 236 episodes. Who is the next most regular character to appear in the show?";
			
			//Alternatives
			cout << "\n\nA) Ben Geller.";
			cout << "\nB) Mr. Heckles.";
			cout << "\nC) Gunther.";
			cout << "\nD) Janice.";
			
			//Option list header - Separation
			cout << "\n\n----------------------------------\n";
			cout << "   LIST OF OPTIONS";
			cout << "\n----------------------------------";
			
			//Alternatives to choose
			cout << "\n\n1 - ANSWER.";
			cout << "\n2 - SKIP.";
			cout << "\n\nCHOOSE ONE OF THE ALTERNATIVES: ";
			cin >> Choice;
			
			//CONDITIONAL "IF" for choices - ANSWER
			if(Choice == 1){
				cout << "\nWhat is the correct answer? ";
				cin >> Answers;
				if((Answers == 'c') || (Answers == 'C')){
					cout << "\nRight answer!";
					Hits++;
					HardHits++;
					
					//Explanation of the answer 
					cout << "\n\nEXPLANATION: The character Gunther appeared in 151 episodes.";
					
				}else{
					cout << "\nIncorrect answer!!";
					cout << "\nCorrect answer: Letter C";
					Misses++;
					
					//Explanation of the answer 
					cout << "\n\nEXPLANATION: The character Gunther appeared in 151 episodes.";
				}
				
				//Shows that the question has been answered
				QuestionAnswered++;
				
				//Skip to the next question
				cout << "\n-------------------------------------------------------------------------------\n";
				getchar();
				cout << "\nPress \"enter\" to continue...";
				getchar();
				system("CLS");
			}
			
			//CONDITIONAL "IF" for choices - SKIP
			if(Choice == 2){
				SkippedQuestions++;
				cout << "\n\nPress \"enter\" to skip the question";
				getchar();
				//To clear the screen and go to the next question 
				getchar();
				system("CLS");
			}
			
			/* AS THIS IS THE LAST QUESTION OF THIS LEVEL, WE MUST BREAK THE SWITCH. 
			AS EVERY SWITCH CORRESPONDS TO A LEVEL OF DIFFICULTY */
			
			//Skip to the next question / Break the case
			break;
	}
	
	//Thanks to the user
	cout << "================ THANK YOU SO MUCH =================\n";
	cout << "\nHere is the thanks from the creator of this \"Game\".";
	cout << "\nI hope this game could have been fun, and that";
	cout << " it serves for something bigger \nand more important than that, to gain knowledge!";
	
	//Option for player to jump to the scoreboard
	cout << "\n-------------------------------------------------------------------------------\n";
	cout << "\nPress \"enter\" to continue...";
	getchar();
	system("CLS");
	
	//Shows the results to the user
	cout << "================ GAME RESULTS =================\n";
	cout << "\nPlayer: " << Name;
	cout << "\nAnswered Questions.: " << QuestionAnswered;
	cout << "\nSkipped Questions..: " << SkippedQuestions;
	cout << "\nTotal Hits.........: " << Hits;
	cout << "\nTotal Errors.......: " << Misses;
	cout << "\nTotal Score........: " << (EasyHits * 2) + (MediumHits * 3) + (HardHits * 5);
	
	
	//Credits
	cout << "\n\nCreated by: Pedro Dantas.";
	cout << "\n\nGithub: https://github.com/Pedro0901";
	
	getchar();
	getchar();
	
	//Returns the function
	return 0;
	
}
