/* PROGRAMA DE PERGUNTAS E RESPOSTAS */

#include <iostream>
#include <stdio.h>
#include <locale.h>
#include <cmath>

using namespace std;

//Fun��o principal do programa
int main(){
	
	//Permite usar acentos
	setlocale(LC_ALL, "");
	
	//Definindo variaveis para escolhas do Usu�rio
	char nome[50];												//Variavel para nome do usu�rio
	int escolha;												//Variavel para escolha da lista de op��es
	char resposta;												//Variavel para resposta das quest�es
	
	//Definindo variaveis para Resultados do Jogo
	int acertos = 0, erros = 0;									//Variaveis que contabilizam erros e acertos (totais)
	int acertosFacil = 0;										//Variaveis que contabilizam acertos - NIVEL F�CIL
	int acertosMedio = 0;										//Variaveis que contabilizam acertos - NIVEL M�DIO
	int acertosDificil;											//Variaveis que contabilizam acertos - NIVEL DIFICIL
	int perguntaRespondida = 0;									//Variavel para contabilizar cada pergunta respondida
	int perguntaspuladas = 0;									//Variavel para contabilizar cada pergunta pulada
	int pergunta = 1;											//Variavel que enumera as perguntas
	
	//Variaveis para dificuldades (Separadas por switch)
	int facil = 0;												//Variavel para switch das quest�es de n�vel F�CIL
	int medio = 0;												//Variavel para switch das quest�es de n�vel M�DIO
	int dificil = 0;											//Variavel para switch das quest�es de n�vel DIFICIL
	
	//Cabe�alho do Programa
	cout << "================== JOGO DE PERGUNTAS E RESPOSTAS ===============================\n";
	
	//Usu�rio informa seu nome
	cout << "Informe o nome do participante e em seguida pressione a tecla \"enter\".\n";
	cout << "\nNOME DO PARTICIPANTE: ";
	
	//Fun��o gets na variavel nome l� o nome completo do usu�rio 
	gets(nome);
	
	//Limpa a tela ap�s pressionar enter
	system("CLS");
	
	//D� as boas vindas ao usu�rio
	cout << "================= SEJA BEM-VINDO (A) ===========================================\n";
	cout << "SEJA BEM VINDO " << nome << "!";
	
	//Explica��o do jogo ao usu�rio
	cout << "\n\n-------------------------------------------------------------------------------\n";
	cout << "\nEste � um jogo divertido de perguntas e respostas. O jogador dever� escolher\n";
	cout << "dentre as 4 alternativas apenas uma e em seguida pressionar \"enter\".\n\n";
	cout << "-------------------------------------------------------------------------------\n";
	
	//Deseja boa sorte ao usu�rio
	cout << "\nBoa sorte e bom jogo!";
	cout << "\nPressione \"enter\" para prosseguir.";
	getchar();
	
	//Limpa a tela ap�s pressionar enter
	system("CLS");
	
	//PARTE DAS PERGUNTAS - SWITCH 01 - NIVEL F�CIL
	switch(facil){
		
		//PERGUNTA 01 - F�CIL
		case 0:
			
			//Mostra o numero da pergunta e seu n�vel
			cout << "----------------------------------\n";
			cout << "   Pergunta n� " << pergunta << " N�vel: F�cil.";
			cout << "\n----------------------------------";
			
			//Mostra a pergunta e alternativas ao usu�rio
			cout << "\n\nO que � Brexit?";
			
			//Alternativas
			cout << "\n\nA) Sa�da do Reino Unido da Zona Euro.";
			cout << "\nB) Sa�da do Reino Unido da Uni�o Europ�ia.";
			cout << "\nC) Sa�da da Inglaterra do Reino Unido.";
			cout << "\nD) Fim da monarquia no Reino Unido.";
			
			//Cabe�alho lista de op��es - Separa��o
			cout << "\n\n----------------------------------\n";
			cout << "   LISTA DE OP��ES";
			cout << "\n----------------------------------";
			
			//Alternativas para escolha
			cout << "\n\n1 - RESPONDER.";
			cout << "\n2 - PULAR.";
			cout << "\n\nESCOLHA UMA DAS ALTERNATIVAS: ";
			cin >> escolha;
			
			//CONDICIONAL "SE" para escolhas - RESPONDER
			if(escolha == 1){
				cout << "\nQual � a resposta correta? ";
				cin >> resposta;
				if((resposta == 'b') || (resposta == 'B')){
					cout << "\nResposta correta!";
					acertos++;
					acertosFacil++;
					
					//EXPLICA��O DA RESPOSTA 
					cout << "\n\nEXPLICA��O: O termo Brexit vem da jun��o das palavras inglesas �Britain�";
					cout << "\n(Bretanha) e �Exit� (sa�da). Esse processo, que teve in�cio com o referendo de"; 
					cout << "\n23 de junho de 2016, representa a sa�da do Reino Unido da Uni�o Europeia. No dia 31 de janeiro de 2020, o Reino Unido definitivamente deixou a Uni�o Europeia";
					cout << "\ntornando-se o primeiro pa�s a faz�-lo.";
					
				}else{
					cout << "\nResposta incorreta!";
					cout << "\nResposta correta: Letra B";
					erros++;
					
					//EXPLICA��O DA RESPOSTA 
					cout << "\n\nEXPLICA��O: O termo Brexit vem da jun��o das palavras inglesas �Britain�";
					cout << "\n(Bretanha) e �Exit� (sa�da). Esse processo, que teve in�cio com o referendo de"; 
					cout << "\n23 de junho de 2016, representa a sa�da do Reino Unido da Uni�o Europeia. No dia 31 de janeiro de 2020, o Reino Unido definitivamente deixou a Uni�o Europeia";
					cout << "\ntornando-se o primeiro pa�s a faz�-lo.";
				}
				
				//Mostra que a pergunta foi respondida
				perguntaRespondida++;
				
				//Pula para a proxima quest�o
				cout << "\n-------------------------------------------------------------------------------\n";
				getchar();
				cout << "\nPressione \"enter\" para continuar...";
				getchar();
				system("CLS");
			}
			
			//CONDICIONAL "SE" para escolhas - PULAR
			if(escolha == 2){
				perguntaspuladas++;
				cout << "\n\nPressione \"enter\" para pular a quest�o";
				getchar();
				//Para limpar a tela e ir pra proxima quest�o 
				getchar();
				system("CLS");
			}
			
		//PERGUNTA 02 - F�CIL
		case 1:
			
			//Mostra o numero da pergunta e seu n�vel
			cout << "----------------------------------\n";
			cout << "   Pergunta n� " << (pergunta + 1) << " N�vel: F�cil.";
			cout << "\n----------------------------------";
			
			//Mostra a pergunta e alternativas ao usu�rio
			cout << "\n\nQual a nacionalidade do soci�logo e fil�sofo Durkheim?";
			
			//Alternativas
			cout << "\n\nA) Alem�.";
			cout << "\nB) Norueguesa.";
			cout << "\nC) Inglesa.";
			cout << "\nD) Francesa.";
			
			//Cabe�alho lista de op��es - Separa��o
			cout << "\n\n----------------------------------\n";
			cout << "   LISTA DE OP��ES";
			cout << "\n----------------------------------";
			
			//Alternativas para escolha
			cout << "\n\n1 - RESPONDER.";
			cout << "\n2 - PULAR.";
			cout << "\n\nESCOLHA UMA DAS ALTERNATIVAS: ";
			cin >> escolha;
			
			//CONDICIONAL "SE" para escolhas - RESPONDER
			if(escolha == 1){
				cout << "\nQual � a resposta correta? ";
				cin >> resposta;
				if((resposta == 'd') || (resposta == 'D')){
					cout << "\nResposta correta!";
					acertos++;
					acertosFacil++;
					
					//EXPLICA��O DA RESPOSTA
					cout << "\n\nEXPLICA��O: David �mile Durkheim (1858-1917) foi um dos maiores soci�logos, fil�";
					cout << "sofos e antrop�logos de todos os tempos. Nasceu na cidade francesa de �pinal, e faleceu em Paris.";
					
				}else{
					cout << "\nResposta incorreta!";
					cout << "\nResposta correta: Letra D";
					erros++;
					
					//EXPLICA��O DA RESPOSTA
					cout << "\n\nEXPLICA��O: David �mile Durkheim (1858-1917) foi um dos maiores soci�logos, fil�";
					cout << "sofos e antrop�logos de todos os tempos. Nasceu na cidade francesa de �pinal, e faleceu em Paris.";	
				}
				
				//Mostra que a pergunta foi respondida
				perguntaRespondida++;
				
				//Pula para a proxima quest�o
				cout << "\n-------------------------------------------------------------------------------\n";
				getchar();
				cout << "\nPressione \"enter\" para continuar...";
				getchar();
				system("CLS");
			}
			
			//CONDICIONAL "SE" para escolhas - PULAR
			if(escolha == 2){
				perguntaspuladas++;
				cout << "\n\nPressione \"enter\" para pular a quest�o";
				getchar();
				getchar();
				system("CLS");
			}
		
		//PERGUNTA 03 - F�CIL
		case 2:
			
			//Mostra o numero da pergunta e seu n�vel
			cout << "----------------------------------\n";
			cout << "   Pergunta n� " << (pergunta + 2) << " N�vel: F�cil.";
			cout << "\n----------------------------------";
			
			//Mostra a pergunta e alternativas ao usu�rio
			cout << "\n\nChernobyl e C�sio-137 fazem parte dos maiores acidentes nucleares da hist�ria. \nEm que pa�ses aconteceram?";
			
			//Alternativas
			cout << "\n\nA) R�ssia e Espanha.";
			cout << "\nB) Ucr�nia e Brasil.";
			cout << "\nC) Estados Unidos e Ucr�nia.";
			cout << "\nD) Jap�o e Brasil.";
			
			//Cabe�alho lista de op��es - Separa��o
			cout << "\n\n----------------------------------\n";
			cout << "   LISTA DE OP��ES";
			cout << "\n----------------------------------";
			
			//Alternativas para escolha
			cout << "\n\n1 - RESPONDER.";
			cout << "\n2 - PULAR.";
			cout << "\n\nESCOLHA UMA DAS ALTERNATIVAS: ";
			cin >> escolha;
			
			//CONDICIONAL "SE" para escolhas - RESPONDER
			if(escolha == 1){
				cout << "\nQual � a resposta correta? ";
				cin >> resposta;
				if((resposta == 'b') || (resposta == 'B')){
					cout << "\nResposta correta!";
					acertos++;
					acertosFacil++;
					
					//EXPLICA��O DA RESPOSTA
					cout << "\n\nEXPLICA��O: O acidente de Chernobyl, cidade localizada no norte da Ucr�nia,";
					cout << "\naconteceu em 26 de abril de 1986, quando um reator nuclear explodiu causando a"; 
					cout << "\nlibera��o de res�duos t�xicos em uma enorme �rea."; 
					cout << "\n\nO acidente com c�sio-137 aconteceu em Goi�nia em 13 de setembro de 1987, quando catadores de lixo recolheram um aparelho de radioterapia em uma cl�nica desativada, sem ter conhecimento do que se tratava, com o intuito de vend�-la no"; 
					cout << "\nferro-velho.";
					
				}else{
					cout << "\nResposta incorreta!";
					cout << "\nResposta correta: Letra B";
					erros++;
					
					//EXPLICA��O DA RESPOSTA
					cout << "\n\nEXPLICA��O: O acidente de Chernobyl, cidade localizada no norte da Ucr�nia,";
					cout << "\naconteceu em 26 de abril de 1986, quando um reator nuclear explodiu causando a"; 
					cout << "\nlibera��o de res�duos t�xicos em uma enorme �rea."; 
					cout << "\n\nO acidente com c�sio-137 aconteceu em Goi�nia em 13 de setembro de 1987, quando catadores de lixo recolheram um aparelho de radioterapia em uma cl�nica desativada, sem ter conhecimento do que se tratava, com o intuito de vend�-la no"; 
					cout << "\nferro-velho.";
				}
				
				//Mostra que a pergunta foi respondida
				perguntaRespondida++;
				
				//Pula para a proxima quest�o
				cout << "\n-------------------------------------------------------------------------------\n";
				getchar();
				cout << "\nPressione \"enter\" para continuar...";
				getchar();
				system("CLS");
			}
			
			//CONDICIONAL "SE" para escolhas - PULAR
			if(escolha == 2){
				perguntaspuladas++;
				cout << "\n\nPressione \"enter\" para pular a quest�o";
				getchar();
				getchar();
				system("CLS");
			}
			
		//PERGUNTA 04 - F�CIL
		case 3:
			
			//Mostra o numero da pergunta e seu n�vel
			cout << "----------------------------------\n";
			cout << "   Pergunta n� " << (pergunta + 3) << " N�vel: F�cil.";
			cout << "\n----------------------------------";
			
			//Mostra a pergunta e alternativas ao usu�rio
			cout << "\n\nEm que pa�s se localizava Auschwitz, o maior campo de concentra��o nazi?";
			
			//Alternativas
			cout << "\n\nA) Alemanha.";
			cout << "\nB) Estados Unidos.";
			cout << "\nC) Pol�nia.";
			cout << "\nD) �ustria.";
			
			//Cabe�alho lista de op��es - Separa��o
			cout << "\n\n----------------------------------\n";
			cout << "   LISTA DE OP��ES";
			cout << "\n----------------------------------";
			
			//Alternativas para escolha
			cout << "\n\n1 - RESPONDER.";
			cout << "\n2 - PULAR.";
			cout << "\n\nESCOLHA UMA DAS ALTERNATIVAS: ";
			cin >> escolha;
			
			//CONDICIONAL "SE" para escolhas - RESPONDER
			if(escolha == 1){
				cout << "\nQual � a resposta correta? ";
				cin >> resposta;
				if((resposta == 'c') || (resposta == 'C')){
					cout << "\nResposta correta!";
					acertos++;
					acertosFacil++;
					
					//EXPLICA��O DA RESPOSTA 
					cout << "\n\nEXPLICA��O: O maior centro de exterm�nio da Segunda Guerra Mundial foi instalado";
					cout << "na Pol�nia, a 60 quil�metros da sua capital. Fundado em 1940, funcionou at� ja-\nneiro de 1945.";
					
				}else{
					cout << "\nResposta incorreta!";
					cout << "\nResposta correta: Letra C";
					erros++;
					
					//EXPLICA��O DA RESPOSTA 
					cout << "\n\nEXPLICA��O: O maior centro de exterm�nio da Segunda Guerra Mundial foi instalado";
					cout << "na Pol�nia, a 60 quil�metros da sua capital. Fundado em 1940, funcionou at� ja-\nneiro de 1945.";
				}
				
				//Mostra que a pergunta foi respondida
				perguntaRespondida++;
				
				//Pula para a proxima quest�o
				cout << "\n-------------------------------------------------------------------------------\n";
				getchar();
				cout << "\nPressione \"enter\" para continuar...";
				getchar();
				system("CLS");
			}
			
			//CONDICIONAL "SE" para escolhas - PULAR
			if(escolha == 2){
				perguntaspuladas++;
				cout << "\n\nPressione \"enter\" para pular a quest�o";
				getchar();
				getchar();
				system("CLS");
			}
				
		//PERGUNTA 05 - F�CIL
		case 4:
			
			//Mostra o numero da pergunta e seu n�vel
			cout << "----------------------------------\n";
			cout << "   Pergunta n� " << (pergunta + 4) << " N�vel: F�cil.";
			cout << "\n----------------------------------";
			
			//Mostra a pergunta e alternativas ao usu�rio
			cout << "\n\nQuais as maiores pandemias da hist�ria?";
			
			//Alternativas
			cout << "\n\nA) Gripe espanhola e c�ncer.";
			cout << "\nB) Var�ola e Hipertens�o.";
			cout << "\nC) Asma e Gripe espanhola.";
			cout << "\nD) Peste negra e Covid-19.";
			
			//Cabe�alho lista de op��es - Separa��o
			cout << "\n\n----------------------------------\n";
			cout << "   LISTA DE OP��ES";
			cout << "\n----------------------------------";
			
			//Alternativas para escolha
			cout << "\n\n1 - RESPONDER.";
			cout << "\n2 - PULAR.";
			cout << "\n\nESCOLHA UMA DAS ALTERNATIVAS: ";
			cin >> escolha;
			
			//CONDICIONAL "SE" para escolhas - RESPONDER
			if(escolha == 1){
				cout << "\nQual � a resposta correta? ";
				cin >> resposta;
				if((resposta == 'd') || (resposta == 'D')){
					cout << "\nResposta correta!";
					acertos++;
					acertosFacil++;
					
					//EXPLICA��O DA RESPOSTA 
					cout << "\n\nEXPLICA��O: Com exce��o da alternativa d), em cada uma das alternativas consta"; 
					cout << "\napenas uma pandemia. C�ncer, hipertens�o, e asma n�o podem ser pandemias, porque";
					cout << "n�o s�o doen�as contagiosas.";
					
				}else{
					cout << "\nResposta incorreta!";
					cout << "\nResposta correta: Letra D";
					erros++;
					
					//EXPLICA��O DA RESPOSTA 
					cout << "\n\nEXPLICA��O: Com exce��o da alternativa d), em cada uma das alternativas consta"; 
					cout << "\napenas uma pandemia. C�ncer, hipertens�o, e asma n�o podem ser pandemias, porque";
					cout << "n�o s�o doen�as contagiosas.";
				}
				
				//Mostra que a pergunta foi respondida
				perguntaRespondida++;
				
				//Pula para a proxima quest�o
				cout << "\n-------------------------------------------------------------------------------\n";
				getchar();
				cout << "\nPressione \"enter\" para continuar...";
				getchar();
				system("CLS");
			}
			
			//CONDICIONAL "SE" para escolhas - PULAR
			if(escolha == 2){
				perguntaspuladas++;
				cout << "\n\nPressione \"enter\" para pular a quest�o";
				getchar();
				getchar();
				system("CLS");
			}
			
		//PERGUNTA 06 - F�CIL
		case 5:
			
			//Mostra o numero da pergunta e seu n�vel
			cout << "----------------------------------\n";
			cout << "   Pergunta n� " << (pergunta + 5) << " N�vel: F�cil.";
			cout << "\n----------------------------------";
			
			//Mostra a pergunta e alternativas ao usu�rio
			cout << "\n\nDe quem � a famosa frase: \"Penso, logo existo\"?";
			
			//Alternativas
			cout << "\n\nA) Descartes.";
			cout << "\nB) Plat�o.";
			cout << "\nC) Galileu Galilei.";
			cout << "\nD) Francis Bacon.";
			
			//Cabe�alho lista de op��es - Separa��o
			cout << "\n\n----------------------------------\n";
			cout << "   LISTA DE OP��ES";
			cout << "\n----------------------------------";
			
			//Alternativas para escolha
			cout << "\n\n1 - RESPONDER.";
			cout << "\n2 - PULAR.";
			cout << "\n\nESCOLHA UMA DAS ALTERNATIVAS: ";
			cin >> escolha;
			
			//CONDICIONAL "SE" para escolhas - RESPONDER
			if(escolha == 1){
				cout << "\nQual � a resposta correta? ";
				cin >> resposta;
				if((resposta == 'a') || (resposta == 'A')){
					cout << "\nResposta correta!";
					acertos++;
					acertosFacil++;
					
					//EXPLICA��O DA RESPOSTA 
					cout << "\n\nEXPLICA��O: �Je pense, donc je suis� � a frase original, escrita em franc�s, do fil�sofo Ren� Descartes (1596-1650). Ela resume o pensamento e o m�todo de";
					cout << "\nDescartes, para quem tudo tem in�cio na d�vida.";
	
				}else{
					cout << "\nResposta incorreta!";
					cout << "\nResposta correta: Letra A";
					erros++;
					
					//EXPLICA��O DA RESPOSTA 
					cout << "\n\nEXPLICA��O: �Je pense, donc je suis� � a frase original, escrita em franc�s, do fil�sofo Ren� Descartes (1596-1650). Ela resume o pensamento e o m�todo de";
					cout << "\nDescartes, para quem tudo tem in�cio na d�vida.";
				}
				
				//Mostra que a pergunta foi respondida
				perguntaRespondida++;
				
				//Pula para a proxima quest�o
				cout << "\n-------------------------------------------------------------------------------\n";
				getchar();
				cout << "\nPressione \"enter\" para continuar...";
				getchar();
				system("CLS");
			}
			
			//CONDICIONAL "SE" para escolhas - PULAR
			if(escolha == 2){
				perguntaspuladas++;
				cout << "\n\nPressione \"enter\" para pular a quest�o";
				getchar();
				getchar();
				system("CLS");
			}	
				
		//PERGUNTA 07 - F�CIL
		case 6:
			
			//Mostra o numero da pergunta e seu n�vel
			cout << "----------------------------------\n";
			cout << "   Pergunta n� " << (pergunta + 6) << " N�vel: F�cil.";
			cout << "\n----------------------------------";
			
			//Mostra a pergunta e alternativas ao usu�rio
			cout << "\n\nDe onde � a inven��o do chuveiro el�trico?";
			
			//Alternativas
			cout << "\n\nA) Fran�a.";
			cout << "\nB) Inglaterra.";
			cout << "\nC) Brasil.";
			cout << "\nD) It�lia.";
			
			//Cabe�alho lista de op��es - Separa��o
			cout << "\n\n----------------------------------\n";
			cout << "   LISTA DE OP��ES";
			cout << "\n----------------------------------";
			
			//Alternativas para escolha
			cout << "\n\n1 - RESPONDER.";
			cout << "\n2 - PULAR.";
			cout << "\n\nESCOLHA UMA DAS ALTERNATIVAS: ";
			cin >> escolha;
			
			//CONDICIONAL "SE" para escolhas - RESPONDER
			if(escolha == 1){
				cout << "\nQual � a resposta correta? ";
				cin >> resposta;
				if((resposta == 'c') || (resposta == 'C')){
					cout << "\nResposta correta!";
					acertos++;
					acertosFacil++;
					
					//EXPLICA��O DA RESPOSTA 
					cout << "\n\nEXPLICA��O: Francisco Canhos � o nome do homem que, na d�cada de 40, desenvolveu";
					cout << "o primeiro chuveiro el�trico seguro em Ja�-SP. O aparelho vinha sendo desenvol-"; 
					cout << "\nvido desde os anos 30, mas apresentava riscos de curto-circuito.";
					
				}else{
					cout << "\nResposta incorreta!";
					cout << "\nResposta correta: Letra C";
					erros++;
					
					//EXPLICA��O DA RESPOSTA 
					cout << "\n\nEXPLICA��O: Francisco Canhos � o nome do homem que, na d�cada de 40, desenvolveu";
					cout << "o primeiro chuveiro el�trico seguro em Ja�-SP. O aparelho vinha sendo desenvol-"; 
					cout << "\nvido desde os anos 30, mas apresentava riscos de curto-circuito.";
				}
				
				//Mostra que a pergunta foi respondida
				perguntaRespondida++;
				
				//Pula para a proxima quest�o
				cout << "\n-------------------------------------------------------------------------------\n";
				getchar();
				cout << "\nPressione \"enter\" para continuar...";
				getchar();
				system("CLS");
			}
			
			//CONDICIONAL "SE" para escolhas - PULAR
			if(escolha == 2){
				perguntaspuladas++;
				cout << "\n\nPressione \"enter\" para pular a quest�o";
				getchar();
				getchar();
				system("CLS");
			}
			
		//PERGUNTA 08 - F�CIL
		case 7:
			
			//Mostra o numero da pergunta e seu n�vel
			cout << "----------------------------------\n";
			cout << "   Pergunta n� " << (pergunta + 7) << " N�vel: F�cil.";
			cout << "\n----------------------------------";
			
			//Mostra a pergunta e alternativas ao usu�rio
			cout << "\n\nQuais o menor e maior pa�s do mundo?";
			
			//Alternativas
			cout << "\n\nA) Vaticano e R�ssia.";
			cout << "\nB) Nauru e China.";
			cout << "\nC) M�naco e Estados Unidos.";
			cout << "\nD) S�o Marino e �ndia.";
			
			//Cabe�alho lista de op��es - Separa��o
			cout << "\n\n----------------------------------\n";
			cout << "   LISTA DE OP��ES";
			cout << "\n----------------------------------";
			
			//Alternativas para escolha
			cout << "\n\n1 - RESPONDER.";
			cout << "\n2 - PULAR.";
			cout << "\n\nESCOLHA UMA DAS ALTERNATIVAS: ";
			cin >> escolha;
			
			//CONDICIONAL "SE" para escolhas - RESPONDER
			if(escolha == 1){
				cout << "\nQual � a resposta correta? ";
				cin >> resposta;
				if((resposta == 'a') || (resposta == 'A')){
					cout << "\nResposta correta!";
					acertos++;
					acertosFacil++;
					
					//EXPLICA��O DA RESPOSTA 
					cout << "\n\nEXPLICA��O: O Vaticano, sede da igreja cat�lica, tem apenas 44 hectares (0,44km quadrados). ";
					cout << "A R�ssia, localizada em dois continentes (�sia e Europa), tem 17 \nmilh�es de km quadrados.";
					
				}else{
					cout << "\nResposta incorreta!";
					cout << "\nResposta correta: Letra A";
					erros++;
					
					//EXPLICA��O DA RESPOSTA 
					cout << "\n\nEXPLICA��O: O Vaticano, sede da igreja cat�lica, tem apenas 44 hectares (0,44km quadrados). ";
					cout << "A R�ssia, localizada em dois continentes (�sia e Europa), tem 17 \nmilh�es de km quadrados.";
				}
				
				//Mostra que a pergunta foi respondida
				perguntaRespondida++;
				
				//Pula para a proxima quest�o
				cout << "\n-------------------------------------------------------------------------------\n";
				getchar();
				cout << "\nPressione \"enter\" para continuar...";
				getchar();
				system("CLS");
			}
			
			//CONDICIONAL "SE" para escolhas - PULAR
			if(escolha == 2){
				perguntaspuladas++;
				cout << "\n\nPressione \"enter\" para pular a quest�o";
				getchar();
				getchar();
				system("CLS");
			}
			
		//PERGUNTA 09 - F�CIL
		case 8:
			
			//Mostra o numero da pergunta e seu n�vel
			cout << "----------------------------------\n";
			cout << "   Pergunta n� " << (pergunta + 8) << " N�vel: F�cil.";
			cout << "\n----------------------------------";
			
			//Mostra a pergunta e alternativas ao usu�rio
			cout << "\n\nComo se chamam os vasos que transportam sangue do cora��o para a periferia do corpo?";
			
			//Alternativas
			cout << "\n\nA) Veias.";
			cout << "\nB) �trios.";
			cout << "\nC) Ventr�culos.";
			cout << "\nD) Art�rias.";
			
			//Cabe�alho lista de op��es - Separa��o
			cout << "\n\n----------------------------------\n";
			cout << "   LISTA DE OP��ES";
			cout << "\n----------------------------------";
			
			//Alternativas para escolha
			cout << "\n\n1 - RESPONDER.";
			cout << "\n2 - PULAR.";
			cout << "\n\nESCOLHA UMA DAS ALTERNATIVAS: ";
			cin >> escolha;
			
			//CONDICIONAL "SE" para escolhas - RESPONDER
			if(escolha == 1){
				cout << "\nQual � a resposta correta? ";
				cin >> resposta;
				if((resposta == 'd') || (resposta == 'D')){
					cout << "\nResposta correta!";
					acertos++;
					acertosFacil++;
					
					//EXPLICA��O DA RESPOSTA 
					cout << "\n\nEXPLICA��O: As art�rias s�o um tipo de vasos sangu�neos que transportam o sangue";
					cout << "arterial (com oxig�nio e nutrientes) do cora��o para o corpo.";
					
				}else{
					cout << "\nResposta incorreta!";
					cout << "\nResposta correta: Letra D";
					erros++;
					
					//EXPLICA��O DA RESPOSTA 
					cout << "\n\nEXPLICA��O: As art�rias s�o um tipo de vasos sangu�neos que transportam o sangue";
					cout << "arterial (com oxig�nio e nutrientes) do cora��o para o corpo.";
				}
				
				//Mostra que a pergunta foi respondida
				perguntaRespondida++;
				
				//Pula para a proxima quest�o
				cout << "\n-------------------------------------------------------------------------------\n";
				getchar();
				cout << "\nPressione \"enter\" para continuar...";
				getchar();
				system("CLS");
			}
			
			//CONDICIONAL "SE" para escolhas - PULAR
			if(escolha == 2){
				perguntaspuladas++;
				cout << "\n\nPressione \"enter\" para pular a quest�o";
				getchar();
				getchar();
				system("CLS");
			}
			
		//PERGUNTA 10 - F�CIL
		case 9:
			
			//Mostra o numero da pergunta e seu n�vel
			cout << "----------------------------------\n";
			cout << "   Pergunta n� " << (pergunta + 9) << " N�vel: F�cil.";
			cout << "\n----------------------------------";
			
			//Mostra a pergunta e alternativas ao usu�rio
			cout << "\n\nQuais as duas datas que s�o comemoradas em novembro?";
			
			//Alternativas
			cout << "\n\nA) Independ�ncia do Brasil e Dia da Bandeira.";
			cout << "\nB) Proclama��o da Rep�blica e Dia Nacional da Consci�ncia Negra.";
			cout << "\nC) Dia de Finados e Dia Nacional do Livro.";
			cout << "\nD) Black Friday e Dia da �rvore.";
			
			//Cabe�alho lista de op��es - Separa��o
			cout << "\n\n----------------------------------\n";
			cout << "   LISTA DE OP��ES";
			cout << "\n----------------------------------";
			
			//Alternativas para escolha
			cout << "\n\n1 - RESPONDER.";
			cout << "\n2 - PULAR.";
			cout << "\n\nESCOLHA UMA DAS ALTERNATIVAS: ";
			cin >> escolha;
			
			//CONDICIONAL "SE" para escolhas - RESPONDER
			if(escolha == 1){
				cout << "\nQual � a resposta correta? ";
				cin >> resposta;
				if((resposta == 'b') || (resposta == 'B')){
					cout << "\nResposta correta!";
					acertos++;
					acertosFacil++;
					
					//EXPLICA��O DA RESPOSTA 
					cout << "\n\nEXPLICA��O: A Proclama��o da Rep�blica � comemorada no dia 15 de novembro, data em que Marechal Deodoro da Fonseca proclamou a rep�blica em 1889.";
					cout << "\n\nO Dia Nacional da Consci�ncia Negra � comemorado no dia 20 de novembro, data em que Zumbi dos Palmares morreu, em 1695.";
					
				}else{
					cout << "\nResposta incorreta!";
					cout << "\nResposta correta: Letra B";
					erros++;
					
					//EXPLICA��O DA RESPOSTA 
					cout << "\n\nEXPLICA��O: A Proclama��o da Rep�blica � comemorada no dia 15 de novembro, data em que Marechal Deodoro da Fonseca proclamou a rep�blica em 1889.";
					cout << "\n\nO Dia Nacional da Consci�ncia Negra � comemorado no dia 20 de novembro, data em que Zumbi dos Palmares morreu, em 1695.";
				}
				
				//Mostra que a pergunta foi respondida
				perguntaRespondida++;
				
				//Pula para a proxima quest�o
				cout << "\n-------------------------------------------------------------------------------\n";
				getchar();
				cout << "\nPressione \"enter\" para continuar...";
				getchar();
				system("CLS");
			}
			
			//CONDICIONAL "SE" para escolhas - PULAR
			if(escolha == 2){
				perguntaspuladas++;
				cout << "\n\nPressione \"enter\" para pular a quest�o";
				getchar();
				getchar();
				system("CLS");
			}
			
			/* COMO ESSA � A ULTIMA QUEST�O DESSE N�VEL, DEVEMOS DAR O BREAK NO SWITCH
			JA QUE CADA SWITCH CORRESPONDE A UM N�VEL DE DIFICULDADE*/
			
			//Pula para a proxima quest�o / Faz a quebra do caso
			break;			
	}
	
	//Limpa a tela ap�s o final do n�vel
	system("CLS");
	
	//D� as boas vindas e parab�ns ao usu�rio
	cout << "================= PARAB�NS, N�VEL CONCLU�DO ====================================\n";
	cout << "\nParab�ns " << nome << "! Voc� acaba de superar o n�vel F�cil de nosso desafio.";
	
	//Torna o programa mais pr�ximo do usu�rio, fazendo uma brincadeira
	cout << "\n\n-------------------------------------------------------------------------------\n";
	cout << "\nVoc� acaba de concluir 1/3 de nosso desafio, e voc� sabe o que isso significa?\n";
	cout << "Isso n�o significa nada. Apenas que voc� respondeu 10 das 30 quest�es totais.\n\n";
	cout << "-------------------------------------------------------------------------------\n";
	
	//Explica a brincadeira e d� a possibilidade de prosseguir
	cout << "\nBrincadeiras � parte, parab�ns, boa sorte e bom restante de jogo!";
	cout << "\nPressione \"enter\" para prosseguir.";
	getchar();
	getchar();
	
	//Limpa novamente a tela para ser direcionado �s quest�es de n�vel M�DIO
	system("CLS");
	
	//PARTE DAS PERGUNTAS - SWITCH 02 - NIVEL M�DIO
	switch(medio){
		
		//PERGUNTA 01 - M�DIO
		case 0:
			
			//Mostra o numero da pergunta e seu n�vel
			cout << "----------------------------------\n";
			cout << "   Pergunta n� " << (pergunta) << " N�vel: M�dio.";
			cout << "\n----------------------------------";
			
			//Mostra a pergunta e alternativas ao usu�rio
			cout << "\n\nQual foi a revolu��o que alavancou a independ�ncia do Brasil e em 2017 completou o segundo centen�rio?";
			
			//Alternativas
			cout << "\n\nA) Revolu��o Farroupilha.";
			cout << "\nB) Revolu��o Federalista.";
			cout << "\nC) Revolu��o Praieira.";
			cout << "\nD) Revolu��o Pernambucana.";
			
			//Cabe�alho lista de op��es - Separa��o
			cout << "\n\n----------------------------------\n";
			cout << "   LISTA DE OP��ES";
			cout << "\n----------------------------------";
			
			//Alternativas para escolha
			cout << "\n\n1 - RESPONDER.";
			cout << "\n2 - PULAR.";
			cout << "\n\nESCOLHA UMA DAS ALTERNATIVAS: ";
			cin >> escolha;
			
			//CONDICIONAL "SE" para escolhas - RESPONDER
			if(escolha == 1){
				cout << "\nQual � a resposta correta? ";
				cin >> resposta;
				if((resposta == 'd') || (resposta == 'D')){
					cout << "\nResposta correta!";
					acertos++;
					acertosMedio++;
					
					//EXPLICA��O DA RESPOSTA 
					cout << "\n\nEXPLICA��O: A Revolu��o Pernambucana, tamb�m chamada de Revolu��o dos Padres, o-"; 
					cout << "correu em 1817 em Pernambuco. Insatisfeitos com o aumento de impostos e gastos";
					cout << "\nda Coroa portuguesa, a popula��o planejou a revolu��o que duraria cerca de 75"; 
					cout << "\ndias. Essa foi uma das mais importantes revolu��es brasileiras, tendo como mote";
					cout << " a emancipa��o do pa�s, e que mais tarde, culminou na Independ�ncia do Brasil.";

				}else{
					cout << "\nResposta incorreta!";
					cout << "\nResposta correta: Letra D";
					erros++;
					
					//EXPLICA��O DA RESPOSTA 
					cout << "\n\nEXPLICA��O: A Revolu��o Pernambucana, tamb�m chamada de Revolu��o dos Padres, o-"; 
					cout << "correu em 1817 em Pernambuco. Insatisfeitos com o aumento de impostos e gastos";
					cout << "\nda Coroa portuguesa, a popula��o planejou a revolu��o que duraria cerca de 75"; 
					cout << "\ndias. Essa foi uma das mais importantes revolu��es brasileiras, tendo como mote";
					cout << " a emancipa��o do pa�s, e que mais tarde, culminou na Independ�ncia do Brasil.";
				}
				
				//Mostra que a pergunta foi respondida
				perguntaRespondida++;
				
				//Pula para a proxima quest�o
				cout << "\n-------------------------------------------------------------------------------\n";
				getchar();
				cout << "\nPressione \"enter\" para continuar...";
				getchar();
				system("CLS");
			}
			
			//CONDICIONAL "SE" para escolhas - PULAR
			if(escolha == 2){
				perguntaspuladas++;
				cout << "\n\nPressione \"enter\" para pular a quest�o";
				getchar();
				getchar();
				system("CLS");
			}
			
		//PERGUNTA 02 - M�DIO
		case 1:
			
			//Mostra o numero da pergunta e seu n�vel
			cout << "----------------------------------\n";
			cout << "   Pergunta n� " << (pergunta + 1) << " N�vel: M�dio.";
			cout << "\n----------------------------------";
			
			//Mostra a pergunta e alternativas ao usu�rio
			cout << "\n\nQual metal cujo s�mbolo qu�mico � Au?";
			
			//Alternativas
			cout << "\n\nA) Ouro.";
			cout << "\nB) Cobre.";
			cout << "\nC) Prata.";
			cout << "\nD) Magn�sio.";
			
			//Cabe�alho lista de op��es - Separa��o
			cout << "\n\n----------------------------------\n";
			cout << "   LISTA DE OP��ES";
			cout << "\n----------------------------------";
			
			//Alternativas para escolha
			cout << "\n\n1 - RESPONDER.";
			cout << "\n2 - PULAR.";
			cout << "\n\nESCOLHA UMA DAS ALTERNATIVAS: ";
			cin >> escolha;
			
			//CONDICIONAL "SE" para escolhas - RESPONDER
			if(escolha == 1){
				cout << "\nQual � a resposta correta? ";
				cin >> resposta;
				if((resposta == 'a') || (resposta == 'A')){
					cout << "\nResposta correta!";
					acertos++;
					acertosMedio++;
					
					//EXPLICA��O DA RESPOSTA 
					cout << "\n\nEXPLICA��O: O ouro � um metal de transi��o presente na tabela peri�dica, sendo"; 
					cout << "\nrepresentado pelo s�mbolo Au.";
					
				}else{
					cout << "\nResposta incorreta!";
					cout << "\nResposta correta: Letra A";
					erros++;
					
					//EXPLICA��O DA RESPOSTA 
					cout << "\n\nEXPLICA��O: O ouro � um metal de transi��o presente na tabela peri�dica, sendo"; 
					cout << "\nrepresentado pelo s�mbolo Au.";
				}
				
				//Mostra que a pergunta foi respondida
				perguntaRespondida++;
				
				//Pula para a proxima quest�o
				cout << "\n-------------------------------------------------------------------------------\n";
				getchar();
				cout << "\nPressione \"enter\" para continuar...";
				getchar();
				system("CLS");
			}
			
			//CONDICIONAL "SE" para escolhas - PULAR
			if(escolha == 2){
				perguntaspuladas++;
				cout << "\n\nPressione \"enter\" para pular a quest�o";
				getchar();
				getchar();
				system("CLS");
			}
			
		//PERGUNTA 03 - M�DIO
		case 2:
			
			//Mostra o numero da pergunta e seu n�vel
			cout << "----------------------------------\n";
			cout << "   Pergunta n� " << (pergunta + 2) << " N�vel: M�dio.";
			cout << "\n----------------------------------";
			
			//Mostra a pergunta e alternativas ao usu�rio
			cout << "\n\nQuem pintou o teto da Capela Sistina?";
			
			//Alternativas
			cout << "\n\nA) Michelangelo.";
			cout << "\nB) Leonardo da Vinci.";
			cout << "\nC) Rafael.";
			cout << "\nD) Donatello.";
			
			//Cabe�alho lista de op��es - Separa��o
			cout << "\n\n----------------------------------\n";
			cout << "   LISTA DE OP��ES";
			cout << "\n----------------------------------";
			
			//Alternativas para escolha
			cout << "\n\n1 - RESPONDER.";
			cout << "\n2 - PULAR.";
			cout << "\n\nESCOLHA UMA DAS ALTERNATIVAS: ";
			cin >> escolha;
			
			//CONDICIONAL "SE" para escolhas - RESPONDER
			if(escolha == 1){
				cout << "\nQual � a resposta correta? ";
				cin >> resposta;
				if((resposta == 'a') || (resposta == 'A')){
					cout << "\nResposta correta!";
					acertos++;
					acertosMedio++;
					
					//EXPLICA��O DA RESPOSTA 
					cout << "\n\nEXPLICA��O: Michelangelo (1475-1564) foi um pintor, escultor e arquiteto italia-";
					cout << "no. Ele � o respons�vel por pintar, durante os anos 1508 e 1512, o teto da Cape-";
					cout << "la Sistina, no Vaticano.";
					
				}else{
					cout << "\nResposta incorreta!";
					cout << "\nResposta correta: Letra A";
					erros++;
					
					//EXPLICA��O DA RESPOSTA 
					cout << "\n\nEXPLICA��O: Michelangelo (1475-1564) foi um pintor, escultor e arquiteto italia-";
					cout << "no. Ele � o respons�vel por pintar, durante os anos 1508 e 1512, o teto da Cape-";
					cout << "la Sistina, no Vaticano.";
				}
				
				//Mostra que a pergunta foi respondida
				perguntaRespondida++;
				
				//Pula para a proxima quest�o
				cout << "\n-------------------------------------------------------------------------------\n";
				getchar();
				cout << "\nPressione \"enter\" para continuar...";
				getchar();
				system("CLS");
			}
			
			//CONDICIONAL "SE" para escolhas - PULAR
			if(escolha == 2){
				perguntaspuladas++;
				cout << "\n\nPressione \"enter\" para pular a quest�o";
				getchar();
				getchar();
				system("CLS");
			}
			
		//PERGUNTA 04 - M�DIO
		case 3:
			
			//Mostra o numero da pergunta e seu n�vel
			cout << "----------------------------------\n";
			cout << "   Pergunta n� " << (pergunta + 3) << " N�vel: M�dio.";
			cout << "\n----------------------------------";
			
			//Mostra a pergunta e alternativas ao usu�rio
			cout << "\n\nQual a ci�ncia que estuda a atmosfera da Terra e a climatologia?";
			
			//Alternativas
			cout << "\n\nA) Astronomia.";
			cout << "\nB) Horologia.";
			cout << "\nC) Meteorologia.";
			cout << "\nD) Dispers�o atmosf�rica.";
			
			//Cabe�alho lista de op��es - Separa��o
			cout << "\n\n----------------------------------\n";
			cout << "   LISTA DE OP��ES";
			cout << "\n----------------------------------";
			
			//Alternativas para escolha
			cout << "\n\n1 - RESPONDER.";
			cout << "\n2 - PULAR.";
			cout << "\n\nESCOLHA UMA DAS ALTERNATIVAS: ";
			cin >> escolha;
			
			//CONDICIONAL "SE" para escolhas - RESPONDER
			if(escolha == 1){
				cout << "\nQual � a resposta correta? ";
				cin >> resposta;
				if((resposta == 'c') || (resposta == 'C')){
					cout << "\nResposta correta!";
					acertos++;
					acertosMedio++;
					
					//EXPLICA��O DA RESPOSTA 
					cout << "\n\nEXPLICA��O: A meteorologia � uma ci�ncia que estuda os fen�menos que ocorrem na";
					cout << " atmosfera terrestre, com foco no clima e na previs�o do tempo.";
	
				}else{
					cout << "\nResposta incorreta!";
					cout << "\nResposta correta: Letra C";
					erros++;
					
					//EXPLICA��O DA RESPOSTA 
					cout << "\n\nEXPLICA��O: A meteorologia � uma ci�ncia que estuda os fen�menos que ocorrem na";
					cout << " atmosfera terrestre, com foco no clima e na previs�o do tempo.";
				}
				
				//Mostra que a pergunta foi respondida
				perguntaRespondida++;
				
				//Pula para a proxima quest�o
				cout << "\n-------------------------------------------------------------------------------\n";
				getchar();
				cout << "\nPressione \"enter\" para continuar...";
				getchar();
				system("CLS");
			}
			
			//CONDICIONAL "SE" para escolhas - PULAR
			if(escolha == 2){
				perguntaspuladas++;
				cout << "\n\nPressione \"enter\" para pular a quest�o";
				getchar();
				getchar();
				system("CLS");
			}
			
		//PERGUNTA 05 - M�DIO
		case 4:
			
			//Mostra o numero da pergunta e seu n�vel
			cout << "----------------------------------\n";
			cout << "   Pergunta n� " << (pergunta + 4) << " N�vel: M�dio.";
			cout << "\n----------------------------------";
			
			//Mostra a pergunta e alternativas ao usu�rio
			cout << "\n\nO etanol � produzido atrav�s de qual fonte de energia?";
			
			//Alternativas
			cout << "\n\nA) Solar.";
			cout << "\nB) Biomassa.";
			cout << "\nC) E�lica.";
			cout << "\nD) Geot�rmica.";
			
			//Cabe�alho lista de op��es - Separa��o
			cout << "\n\n----------------------------------\n";
			cout << "   LISTA DE OP��ES";
			cout << "\n----------------------------------";
			
			//Alternativas para escolha
			cout << "\n\n1 - RESPONDER.";
			cout << "\n2 - PULAR.";
			cout << "\n\nESCOLHA UMA DAS ALTERNATIVAS: ";
			cin >> escolha;
			
			//CONDICIONAL "SE" para escolhas - RESPONDER
			if(escolha == 1){
				cout << "\nQual � a resposta correta? ";
				cin >> resposta;
				if((resposta == 'b') || (resposta == 'B')){
					cout << "\nResposta correta!";
					acertos++;
					acertosMedio++;
					
					//EXPLICA��O DA RESPOSTA 
					cout << "\n\nEXPLICA��O: O etanol pode ser produzido a partir de cana-de-a��car, beterraba e";
					cout << " milho, ou seja, energia que prov�m de mat�ria org�nica.";
	
				}else{
					cout << "\nResposta incorreta!";
					cout << "\nResposta correta: Letra B";
					erros++;
					
					//EXPLICA��O DA RESPOSTA 
					cout << "\n\nEXPLICA��O: O etanol pode ser produzido a partir de cana-de-a��car, beterraba e";
					cout << " milho, ou seja, energia que prov�m de mat�ria org�nica.";
				}
				
				//Mostra que a pergunta foi respondida
				perguntaRespondida++;
				
				//Pula para a proxima quest�o
				cout << "\n-------------------------------------------------------------------------------\n";
				getchar();
				cout << "\nPressione \"enter\" para continuar...";
				getchar();
				system("CLS");
			}
			
			//CONDICIONAL "SE" para escolhas - PULAR
			if(escolha == 2){
				perguntaspuladas++;
				cout << "\n\nPressione \"enter\" para pular a quest�o";
				getchar();
				getchar();
				system("CLS");
			}
			
		//PERGUNTA 06 - M�DIO
		case 5:
			
			//Mostra o numero da pergunta e seu n�vel
			cout << "----------------------------------\n";
			cout << "   Pergunta n� " << (pergunta + 5) << " N�vel: M�dio.";
			cout << "\n----------------------------------";
			
			//Mostra a pergunta e alternativas ao usu�rio
			cout << "\n\nO Dia do Fico � anualmente celebrado em que data?";
			
			//Alternativas
			cout << "\n\nA) 15 de Novembro.";
			cout << "\nB) 7 de Setembro.";
			cout << "\nC) 1� de Maio.";
			cout << "\nD) 9 de Janeiro.";
			
			//Cabe�alho lista de op��es - Separa��o
			cout << "\n\n----------------------------------\n";
			cout << "   LISTA DE OP��ES";
			cout << "\n----------------------------------";
			
			//Alternativas para escolha
			cout << "\n\n1 - RESPONDER.";
			cout << "\n2 - PULAR.";
			cout << "\n\nESCOLHA UMA DAS ALTERNATIVAS: ";
			cin >> escolha;
			
			//CONDICIONAL "SE" para escolhas - RESPONDER
			if(escolha == 1){
				cout << "\nQual � a resposta correta? ";
				cin >> resposta;
				if((resposta == 'd') || (resposta == 'D')){
					cout << "\nResposta correta!";
					acertos++;
					acertosMedio++;
					
					//EXPLICA��O DA RESPOSTA 
					cout << "\n\nEXPLICA��O: Em 1822, Dom Pedro decidiu permanecer no Brasil, contrariando as";
					cout << "\nordens da corte portuguesa. Nessa ocasi�o, disse a c�lebre frase: �Se � para o"; 
					cout << "\nbem de todos e felicidade geral da Na��o, estou pronto. Digam ao povo que fico.�";
	
				}else{
					cout << "\nResposta incorreta!";
					cout << "\nResposta correta: Letra D";
					erros++;
					
					//EXPLICA��O DA RESPOSTA 
					cout << "\n\nEXPLICA��O: Em 1822, Dom Pedro decidiu permanecer no Brasil, contrariando as";
					cout << "\nordens da corte portuguesa. Nessa ocasi�o, disse a c�lebre frase: �Se � para o"; 
					cout << "\nbem de todos e felicidade geral da Na��o, estou pronto. Digam ao povo que fico.�";
				}
				
				//Mostra que a pergunta foi respondida
				perguntaRespondida++;
				
				//Pula para a proxima quest�o
				cout << "\n-------------------------------------------------------------------------------\n";
				getchar();
				cout << "\nPressione \"enter\" para continuar...";
				getchar();
				system("CLS");
			}
			
			//CONDICIONAL "SE" para escolhas - PULAR
			if(escolha == 2){
				perguntaspuladas++;
				cout << "\n\nPressione \"enter\" para pular a quest�o";
				getchar();
				getchar();
				system("CLS");
			}
			
		//PERGUNTA 07 - M�DIO
		case 6:
		
			//Mostra o numero da pergunta e seu n�vel
			cout << "----------------------------------\n";
			cout << "   Pergunta n� " << (pergunta + 6) << " N�vel: M�dio.";
			cout << "\n----------------------------------";
			
			//Mostra a pergunta e alternativas ao usu�rio
			cout << "\n\nQual a unidade que mede a intensidade do som?";
			
			//Alternativas
			cout << "\n\nA) Decibel.";
			cout << "\nB) Frequ�ncia.";
			cout << "\nC) Hertz.";
			cout << "\nD) Compasso.";
			
			//Cabe�alho lista de op��es - Separa��o
			cout << "\n\n----------------------------------\n";
			cout << "   LISTA DE OP��ES";
			cout << "\n----------------------------------";
			
			//Alternativas para escolha
			cout << "\n\n1 - RESPONDER.";
			cout << "\n2 - PULAR.";
			cout << "\n\nESCOLHA UMA DAS ALTERNATIVAS: ";
			cin >> escolha;
			
			//CONDICIONAL "SE" para escolhas - RESPONDER
			if(escolha == 1){
				cout << "\nQual � a resposta correta? ";
				cin >> resposta;
				if((resposta == 'a') || (resposta == 'A')){
					cout << "\nResposta correta!";
					acertos++;
					acertosMedio++;
					
					//EXPLICA��O DA RESPOSTA 
					cout << "\n\nEXPLICA��O: Em todo o mundo, os decib�is s�o usados para medir o n�vel do som, o";
					cout << "que � feito mediante uma escala logar�tmica.";
	
				}else{
					cout << "\nResposta incorreta!";
					cout << "\nResposta correta: Letra A";
					erros++;
					
					//EXPLICA��O DA RESPOSTA 
					cout << "\n\nEXPLICA��O: Em todo o mundo, os decib�is s�o usados para medir o n�vel do som, o";
					cout << "que � feito mediante uma escala logar�tmica.";
				}
				
				//Mostra que a pergunta foi respondida
				perguntaRespondida++;
				
				//Pula para a proxima quest�o
				cout << "\n-------------------------------------------------------------------------------\n";
				getchar();
				cout << "\nPressione \"enter\" para continuar...";
				getchar();
				system("CLS");
			}
			
			//CONDICIONAL "SE" para escolhas - PULAR
			if(escolha == 2){
				perguntaspuladas++;
				cout << "\n\nPressione \"enter\" para pular a quest�o";
				getchar();
				getchar();
				system("CLS");
			}

		//PERGUNTA 08 - M�DIO
		case 7:
			
			//Mostra o numero da pergunta e seu n�vel
			cout << "----------------------------------\n";
			cout << "   Pergunta n� " << (pergunta + 7) << " N�vel: M�dio.";
			cout << "\n----------------------------------";
			
			//Mostra a pergunta e alternativas ao usu�rio
			cout << "\n\nSegundo Pit�goras, a que � igual A2 + B2?";
			
			//Alternativas
			cout << "\n\nA) AB.";
			cout << "\nB) B3.";
			cout << "\nC) C2.";
			cout << "\nD) B4.";
			
			//Cabe�alho lista de op��es - Separa��o
			cout << "\n\n----------------------------------\n";
			cout << "   LISTA DE OP��ES";
			cout << "\n----------------------------------";
			
			//Alternativas para escolha
			cout << "\n\n1 - RESPONDER.";
			cout << "\n2 - PULAR.";
			cout << "\n\nESCOLHA UMA DAS ALTERNATIVAS: ";
			cin >> escolha;
			
			//CONDICIONAL "SE" para escolhas - RESPONDER
			if(escolha == 1){
				cout << "\nQual � a resposta correta? ";
				cin >> resposta;
				if((resposta == 'c') || (resposta == 'C')){
					cout << "\nResposta correta!";
					acertos++;
					acertosMedio++;
					
					//EXPLICA��O DA RESPOSTA 
					cout << "\n\nEXPLICA��O: Segundo o Teorema de Pit�goras: �a soma dos quadrados de seus catetos corresponde ao quadrado de sua hipotenusa.�";
					cout << "\n\nA f�rmula que representa esse conceito � A2 = B2 + C2 (sendo �a� a hipotenusa e �b� e �c� os catetos de um tri�ngulo ret�ngulo).";
	
				}else{
					cout << "\nResposta incorreta!";
					cout << "\nResposta correta: Letra C";
					erros++;
					
					//EXPLICA��O DA RESPOSTA 
					cout << "\n\nEXPLICA��O: Segundo o Teorema de Pit�goras: �a soma dos quadrados de seus catetos corresponde ao quadrado de sua hipotenusa.�";
					cout << "\n\nA f�rmula que representa esse conceito � A2 = B2 + C2 (sendo �a� a hipotenusa e �b� e �c� os catetos de um tri�ngulo ret�ngulo).";
				}
				
				//Mostra que a pergunta foi respondida
				perguntaRespondida++;
				
				//Pula para a proxima quest�o
				cout << "\n-------------------------------------------------------------------------------\n";
				getchar();
				cout << "\nPressione \"enter\" para continuar...";
				getchar();
				system("CLS");
			}
			
			//CONDICIONAL "SE" para escolhas - PULAR
			if(escolha == 2){
				perguntaspuladas++;
				cout << "\n\nPressione \"enter\" para pular a quest�o";
				getchar();
				getchar();
				system("CLS");
			}

		//PERGUNTA 09 - M�DIO
		case 8:
			
			//Mostra o numero da pergunta e seu n�vel
			cout << "----------------------------------\n";
			cout << "   Pergunta n� " << (pergunta + 8) << " N�vel: M�dio.";
			cout << "\n----------------------------------";
			
			//Mostra a pergunta e alternativas ao usu�rio
			cout << "\n\nQuanto tempo a luz do Sol demora para chegar � Terra?";
			
			//Alternativas
			cout << "\n\nA) 12 minutos.";
			cout << "\nB) 1 dia.";
			cout << "\nC) 8 minutos.";
			cout << "\nD) 12 horas.";
			
			//Cabe�alho lista de op��es - Separa��o
			cout << "\n\n----------------------------------\n";
			cout << "   LISTA DE OP��ES";
			cout << "\n----------------------------------";
			
			//Alternativas para escolha
			cout << "\n\n1 - RESPONDER.";
			cout << "\n2 - PULAR.";
			cout << "\n\nESCOLHA UMA DAS ALTERNATIVAS: ";
			cin >> escolha;
			
			//CONDICIONAL "SE" para escolhas - RESPONDER
			if(escolha == 1){
				cout << "\nQual � a resposta correta? ";
				cin >> resposta;
				if((resposta == 'c') || (resposta == 'C')){
					cout << "\nResposta correta!";
					acertos++;
					acertosMedio++;
					
					//EXPLICA��O DA RESPOSTA 
					cout << "\n\nEXPLICA��O: Essa � uma quest�o que se fundamenta na �tica. Ela � calculada com";
					cout << "\nbase na dist�ncia do Sol em rela��o � Terra, que � de aprox. 150 000 000 km,";
					cout << "\nconsiderando que a velocidade da luz no v�cuo � 300 000 Km/s.";
					cout << "\n\n150 000 000 dividido por 300 000 � igual a 500 segundos, ou seja, 8,33 minutos.";
	
				}else{
					cout << "\nResposta incorreta!";
					cout << "\nResposta correta: Letra C";
					erros++;
					
					//EXPLICA��O DA RESPOSTA 
					cout << "\n\nEXPLICA��O: Essa � uma quest�o que se fundamenta na �tica. Ela � calculada com";
					cout << "\nbase na dist�ncia do Sol em rela��o � Terra, que � de aprox. 150 000 000 km,";
					cout << "\nconsiderando que a velocidade da luz no v�cuo � 300 000 Km/s.";
					cout << "\n\n150 000 000 dividido por 300 000 � igual a 500 segundos, ou seja, 8,33 minutos.";
				}
				
				//Mostra que a pergunta foi respondida
				perguntaRespondida++;
				
				//Pula para a proxima quest�o
				cout << "\n-------------------------------------------------------------------------------\n";
				getchar();
				cout << "\nPressione \"enter\" para continuar...";
				getchar();
				system("CLS");
			}
			
			//CONDICIONAL "SE" para escolhas - PULAR
			if(escolha == 2){
				perguntaspuladas++;
				cout << "\n\nPressione \"enter\" para pular a quest�o";
				getchar();
				getchar();
				system("CLS");
			}

		//PERGUNTA 10 - M�DIO
		case 9:
		
			//Mostra o numero da pergunta e seu n�vel
			cout << "----------------------------------\n";
			cout << "   Pergunta n� " << (pergunta + 9) << " N�vel: M�dio.";
			cout << "\n----------------------------------";
			
			//Mostra a pergunta e alternativas ao usu�rio
			cout << "\n\n� um dos maiores nomes da literatura brasileira. Ucraniana, em 2020 faria 100";
			cout << "\nanos. De quem estamos falando?";
			
			//Alternativas
			cout << "\n\nA) Lygia Fagundes Telles.";
			cout << "\nB) Clarice Lispector.";
			cout << "\nC) Cec�lia Meireles.";
			cout << "\nD) Rachel de Queiroz.";
			
			//Cabe�alho lista de op��es - Separa��o
			cout << "\n\n----------------------------------\n";
			cout << "   LISTA DE OP��ES";
			cout << "\n----------------------------------";
			
			//Alternativas para escolha
			cout << "\n\n1 - RESPONDER.";
			cout << "\n2 - PULAR.";
			cout << "\n\nESCOLHA UMA DAS ALTERNATIVAS: ";
			cin >> escolha;
			
			//CONDICIONAL "SE" para escolhas - RESPONDER
			if(escolha == 1){
				cout << "\nQual � a resposta correta? ";
				cin >> resposta;
				if((resposta == 'b') || (resposta == 'B')){
					cout << "\nResposta correta!";
					acertos++;
					acertosMedio++;
					
					//EXPLICA��O DA RESPOSTA 
					cout << "\n\nEXPLICA��O: Clarice Lispector nasceu na Ucr�nia, no dia 10 de dezembro de 1920. Com um estilo inconfund�vel, a obra de Clarice � considerada um marco na litera-";
					cout << "tura.";
	
				}else{
					cout << "\nResposta incorreta!";
					cout << "\nResposta correta: Letra B";
					erros++;
					
					//EXPLICA��O DA RESPOSTA 
					cout << "\n\nEXPLICA��O: Clarice Lispector nasceu na Ucr�nia, no dia 10 de dezembro de 1920. Com um estilo inconfund�vel, a obra de Clarice � considerada um marco na litera-";
					cout << "tura.";
				}
				
				//Mostra que a pergunta foi respondida
				perguntaRespondida++;
				
				//Pula para a proxima quest�o
				cout << "\n-------------------------------------------------------------------------------\n";
				getchar();
				cout << "\nPressione \"enter\" para continuar...";
				getchar();
				system("CLS");
			}
			
			//CONDICIONAL "SE" para escolhas - PULAR
			if(escolha == 2){
				perguntaspuladas++;
				cout << "\n\nPressione \"enter\" para pular a quest�o";
				getchar();
				getchar();
				system("CLS");
			}

			//Faz o break (quebra) do caso
			break;
	}
	
	//Limpa a tela
	system("CLS");
	
	//D� as boas vindas e parab�ns ao usu�rio
	cout << "================= PARAB�NS, N�VEL CONCLU�DO ====================================\n";
	cout << "\nParab�ns " << nome << "! Voc� acaba de superar o n�vel M�dio de nosso desafio.";
	
	//Torna o programa mais pr�ximo do usu�rio, fazendo uma brincadeira
	cout << "\n\n-------------------------------------------------------------------------------\n";
	cout << "\nEst� preparado para o pr�ximo n�vel?\n";
	cout << "Eu espero que esteja! Ah, e voc� j� concluiu 66,66...% de nosso Desafio.\n\n";
	cout << "-------------------------------------------------------------------------------\n";
	
	//Explica a brincadeira e d� a possibilidade de prosseguir
	cout << "\nParab�ns, boa sorte e bom restante de jogo! (Falta pouco!)";
	cout << "\nPressione \"enter\" para prosseguir.";
	getchar();
	getchar();
	
	//Limpa a tela
	system("CLS");
	
	//PARTE DAS PERGUNTAS - SWITCH 03 - NIVEL DIF�CIL
	switch(dificil){
		
		//PERGUNTA 01 - DIF�CIL
		case 0:
			
			//Mostra o numero da pergunta e seu n�vel
			cout << "----------------------------------\n";
			cout << "   Pergunta n� " << (pergunta) << " N�vel: Dif�cil.";
			cout << "\n----------------------------------";
			
			//Mostra a pergunta e alternativas ao usu�rio
			cout << "\n\nQuando mede um hectare?";
			
			//Alternativas
			cout << "\n\nA) 100 metros quadrados.";
			cout << "\nB) 10 mil quil�metros quadrados.";
			cout << "\nC) 24.200 metros.";
			cout << "\nD) 48.400 metros quadrados.";
			
			//Cabe�alho lista de op��es - Separa��o
			cout << "\n\n----------------------------------\n";
			cout << "   LISTA DE OP��ES";
			cout << "\n----------------------------------";
			
			//Alternativas para escolha
			cout << "\n\n1 - RESPONDER.";
			cout << "\n2 - PULAR.";
			cout << "\n\nESCOLHA UMA DAS ALTERNATIVAS: ";
			cin >> escolha;
			
			//CONDICIONAL "SE" para escolhas - RESPONDER
			if(escolha == 1){
				cout << "\nQual � a resposta correta? ";
				cin >> resposta;
				if((resposta == 'b') || (resposta == 'B')){
					cout << "\nResposta correta!";
					acertos++;
					acertosDificil++;
					
					//EXPLICA��O DA RESPOSTA 
					cout << "\n\nEXPLICA��O: Um hectare de terra � equivalente a um hect�metro quadrado. Mas como";
					cout << "muitas pessoas n�o se lembram qual � o valor de um hect�metro, lembramos que um hect�metro quadrado equivale a 10 mil metros quadrados.";
					cout << "\n\nIMPORTANTE: As medidas agr�rias utilizadas no Brasil equivalem a medidas em me-";
					cout << "\ntros e s�o as reconhecidas pelo SI (Sistema Internacional de Unidades).";
	
				}else{
					cout << "\nResposta incorreta!";
					cout << "\nResposta correta: Letra B";
					erros++;
					
					//EXPLICA��O DA RESPOSTA 
					cout << "\n\nEXPLICA��O: Um hectare de terra � equivalente a um hect�metro quadrado. Mas como";
					cout << "muitas pessoas n�o se lembram qual � o valor de um hect�metro, lembramos que um hect�metro quadrado equivale a 10 mil metros quadrados.";
					cout << "\n\nIMPORTANTE: As medidas agr�rias utilizadas no Brasil equivalem a medidas em me-";
					cout << "\ntros e s�o as reconhecidas pelo SI (Sistema Internacional de Unidades).";
				}
				
				//Mostra que a pergunta foi respondida
				perguntaRespondida++;
				
				//Pula para a proxima quest�o
				cout << "\n-------------------------------------------------------------------------------\n";
				getchar();
				cout << "\nPressione \"enter\" para continuar...";
				getchar();
				system("CLS");
			}
			
			//CONDICIONAL "SE" para escolhas - PULAR
			if(escolha == 2){
				perguntaspuladas++;
				cout << "\n\nPressione \"enter\" para pular a quest�o";
				getchar();
				getchar();
				system("CLS");
			}
		
		//PERGUNTA 02 - DIF�CIL
		case 1:
			
			//Mostra o numero da pergunta e seu n�vel
			cout << "----------------------------------\n";
			cout << "   Pergunta n� " << (pergunta + 1) << " N�vel: Dif�cil.";
			cout << "\n----------------------------------";
			
			//Mostra a pergunta e alternativas ao usu�rio
			cout << "\n\nQual foi o matem�tico e ge�grafo que calculou o per�metro da Terra em 240 a.C.?";
			
			//Alternativas
			cout << "\n\nA) S�crates.";
			cout << "\nB) S�focles.";
			cout << "\nC) Descartes.";
			cout << "\nD) Erast�tenes.";
			
			//Cabe�alho lista de op��es - Separa��o
			cout << "\n\n----------------------------------\n";
			cout << "   LISTA DE OP��ES";
			cout << "\n----------------------------------";
			
			//Alternativas para escolha
			cout << "\n\n1 - RESPONDER.";
			cout << "\n2 - PULAR.";
			cout << "\n\nESCOLHA UMA DAS ALTERNATIVAS: ";
			cin >> escolha;
			
			//CONDICIONAL "SE" para escolhas - RESPONDER
			if(escolha == 1){
				cout << "\nQual � a resposta correta? ";
				cin >> resposta;
				if((resposta == 'd') || (resposta == 'D')){
					cout << "\nResposta correta!";
					acertos++;
					acertosDificil++;
					
					//EXPLICA��O DA RESPOSTA 
					cout << "\n\nEXPLICA��O: Se baseando nos equin�cios e solst�cios, durante o per�odo em que";
					cout << "\nmorou em Alexandria, Erast�tenes conseguiu fazer um calculo se baseando na posi-";
					cout << "��o do Sol e do z�nite.";
	
				}else{
					cout << "\nResposta incorreta!";
					cout << "\nResposta correta: Letra D";
					erros++;
					
					//EXPLICA��O DA RESPOSTA 
					cout << "\n\nEXPLICA��O: Se baseando nos equin�cios e solst�cios, durante o per�odo em que";
					cout << "\nmorou em Alexandria, Erast�tenes conseguiu fazer um calculo se baseando na posi-";
					cout << "��o do Sol e do z�nite.";
				}
				
				//Mostra que a pergunta foi respondida
				perguntaRespondida++;
				
				//Pula para a proxima quest�o
				cout << "\n-------------------------------------------------------------------------------\n";
				getchar();
				cout << "\nPressione \"enter\" para continuar...";
				getchar();
				system("CLS");
			}
			
			//CONDICIONAL "SE" para escolhas - PULAR
			if(escolha == 2){
				perguntaspuladas++;
				cout << "\n\nPressione \"enter\" para pular a quest�o";
				getchar();
				getchar();
				system("CLS");
			}
			
		//PERGUNTA 03 - DIF�CIL
		case 2:
			
			//Mostra o numero da pergunta e seu n�vel
			cout << "----------------------------------\n";
			cout << "   Pergunta n� " << (pergunta + 2) << " N�vel: Dif�cil.";
			cout << "\n----------------------------------";
			
			//Mostra a pergunta e alternativas ao usu�rio
			cout << "\n\nNormalmente, quantos litros de sangue uma pessoa tem? Em m�dia, quantos s�o re-";
			cout << "\ntirados numa doa��o de sangue?";
			
			//Alternativas
			cout << "\n\nA) Tem entre 2 a 4 litros. S�o retirados 450 mililitros.";
			cout << "\nB) Tem entre 4 a 6 litros. S�o retirados 450 mililitros.";
			cout << "\nC) Tem 10 litros. S�o retirados 2 litros.";
			cout << "\nD) Tem 7 litros. S�o retirados 1,5 litros.";
			
			//Cabe�alho lista de op��es - Separa��o
			cout << "\n\n----------------------------------\n";
			cout << "   LISTA DE OP��ES";
			cout << "\n----------------------------------";
			
			//Alternativas para escolha
			cout << "\n\n1 - RESPONDER.";
			cout << "\n2 - PULAR.";
			cout << "\n\nESCOLHA UMA DAS ALTERNATIVAS: ";
			cin >> escolha;
			
			//CONDICIONAL "SE" para escolhas - RESPONDER
			if(escolha == 1){
				cout << "\nQual � a resposta correta? ";
				cin >> resposta;
				if((resposta == 'b') || (resposta == 'B')){
					cout << "\nResposta correta!";
					acertos++;
					acertosDificil++;
					
					//EXPLICA��O DA RESPOSTA 
					cout << "\n\nEXPLICA��O: O volume de sangue � entre 7% e 8% o peso corporal. Assim, um adulto"; 
					cout << "com 50 e 80 quilos, pode ter entre 4 e 6 litros de sangue, respectivamente.";
	
				}else{
					cout << "\nResposta incorreta!";
					cout << "\nResposta correta: Letra B";
					erros++;
					
					//EXPLICA��O DA RESPOSTA 
					cout << "\n\nEXPLICA��O: O volume de sangue � entre 7% e 8% o peso corporal. Assim, um adulto"; 
					cout << "com 50 e 80 quilos, pode ter entre 4 e 6 litros de sangue, respectivamente.";
				}
				
				//Mostra que a pergunta foi respondida
				perguntaRespondida++;
				
				//Pula para a proxima quest�o
				cout << "\n-------------------------------------------------------------------------------\n";
				getchar();
				cout << "\nPressione \"enter\" para continuar...";
				getchar();
				system("CLS");
			}
			
			//CONDICIONAL "SE" para escolhas - PULAR
			if(escolha == 2){
				perguntaspuladas++;
				cout << "\n\nPressione \"enter\" para pular a quest�o";
				getchar();
				getchar();
				system("CLS");
			}
			
		//PERGUNTA 04 - DIF�CIL
		case 3:
			
			//Mostra o numero da pergunta e seu n�vel
			cout << "----------------------------------\n";
			cout << "   Pergunta n� " << (pergunta + 3) << " N�vel: Dif�cil.";
			cout << "\n----------------------------------";
			
			//Mostra a pergunta e alternativas ao usu�rio
			cout << "\n\nQuais os nomes dos tr�s Reis Magos?";
			
			//Alternativas
			cout << "\n\nA) Belchior, Gaspar e Baltazar.";
			cout << "\nB) Gaspar, Nicolau e Natanael.";
			cout << "\nC) Melchior, No� e Galileu.";
			cout << "\nD) Gabriel, Benjamim e Melchior.";
			
			//Cabe�alho lista de op��es - Separa��o
			cout << "\n\n----------------------------------\n";
			cout << "   LISTA DE OP��ES";
			cout << "\n----------------------------------";
			
			//Alternativas para escolha
			cout << "\n\n1 - RESPONDER.";
			cout << "\n2 - PULAR.";
			cout << "\n\nESCOLHA UMA DAS ALTERNATIVAS: ";
			cin >> escolha;
			
			//CONDICIONAL "SE" para escolhas - RESPONDER
			if(escolha == 1){
				cout << "\nQual � a resposta correta? ";
				cin >> resposta;
				if((resposta == 'a') || (resposta == 'A')){
					cout << "\nResposta correta!";
					acertos++;
					acertosDificil++;
					
					//EXPLICA��O DA RESPOSTA 
					cout << "\n\nEXPLICA��O: Os tr�s reis magos s�o personalidades que visitaram Jesus ap�s o seu";
					cout << "nascimento. Eles ofereceram alguns itens como forma de presentear a chegada do";
					cout << "\nSalvador. Assim, Belchior levou ouro, Gaspar, incenso, e Baltazar, mirra.";
	
				}else{
					cout << "\nResposta incorreta!";
					cout << "\nResposta correta: Letra A";
					erros++;
					
					//EXPLICA��O DA RESPOSTA 
					cout << "\n\nEXPLICA��O: Os tr�s reis magos s�o personalidades que visitaram Jesus ap�s o seu";
					cout << "nascimento. Eles ofereceram alguns itens como forma de presentear a chegada do";
					cout << "\nSalvador. Assim, Belchior levou ouro, Gaspar, incenso, e Baltazar, mirra.";
				}
				
				//Mostra que a pergunta foi respondida
				perguntaRespondida++;
				
				//Pula para a proxima quest�o
				cout << "\n-------------------------------------------------------------------------------\n";
				getchar();
				cout << "\nPressione \"enter\" para continuar...";
				getchar();
				system("CLS");
			}
			
			//CONDICIONAL "SE" para escolhas - PULAR
			if(escolha == 2){
				perguntaspuladas++;
				cout << "\n\nPressione \"enter\" para pular a quest�o";
				getchar();
				getchar();
				system("CLS");
			}

		//PERGUNTA 05 - DIF�CIL
		case 4:
			
			//Mostra o numero da pergunta e seu n�vel
			cout << "----------------------------------\n";
			cout << "   Pergunta n� " << (pergunta + 4) << " N�vel: Dif�cil.";
			cout << "\n----------------------------------";
			
			//Mostra a pergunta e alternativas ao usu�rio
			cout << "\n\nQuem foi o primeiro homem a pisar na Lua? Em que ano aconteceu?";
			
			//Alternativas
			cout << "\n\nA) Yuri Gagarin, em 1961.";
			cout << "\nB) Buzz Aldrin, em 1969.";
			cout << "\nC) Neil Armstrong, em 1969.";
			cout << "\nD) Charles Duke, em 1971.";
			
			//Cabe�alho lista de op��es - Separa��o
			cout << "\n\n----------------------------------\n";
			cout << "   LISTA DE OP��ES";
			cout << "\n----------------------------------";
			
			//Alternativas para escolha
			cout << "\n\n1 - RESPONDER.";
			cout << "\n2 - PULAR.";
			cout << "\n\nESCOLHA UMA DAS ALTERNATIVAS: ";
			cin >> escolha;
			
			//CONDICIONAL "SE" para escolhas - RESPONDER
			if(escolha == 1){
				cout << "\nQual � a resposta correta? ";
				cin >> resposta;
				if((resposta == 'c') || (resposta == 'C')){
					cout << "\nResposta correta!";
					acertos++;
					acertosDificil++;
					
					//EXPLICA��O DA RESPOSTA 
					cout << "\n\nEXPLICA��O: Neil Armstrong (1930-2012) foi um engenheiro e astronauta, sendo o";
					cout << "\nprimeiro homem a pisar na lua em 1969 na miss�o Apollo 11, ao lado dos astronau-";
					cout << "tas: Michael Collins e Edwin 'Buzz' Aldrian.";
	
				}else{
					cout << "\nResposta incorreta!";
					cout << "\nResposta correta: Letra C";
					erros++;
					
					//EXPLICA��O DA RESPOSTA 
					cout << "\n\nEXPLICA��O: Neil Armstrong (1930-2012) foi um engenheiro e astronauta, sendo o";
					cout << "\nprimeiro homem a pisar na lua em 1969 na miss�o Apollo 11, ao lado dos astronau-";
					cout << "tas: Michael Collins e Edwin 'Buzz' Aldrian.";
				}
				
				//Mostra que a pergunta foi respondida
				perguntaRespondida++;
				
				//Pula para a proxima quest�o
				cout << "\n-------------------------------------------------------------------------------\n";
				getchar();
				cout << "\nPressione \"enter\" para continuar...";
				getchar();
				system("CLS");
			}
			
			//CONDICIONAL "SE" para escolhas - PULAR
			if(escolha == 2){
				perguntaspuladas++;
				cout << "\n\nPressione \"enter\" para pular a quest�o";
				getchar();
				getchar();
				system("CLS");
			}

		//PERGUNTA 06 - DIF�CIL
		case 5:
			
			//Mostra o numero da pergunta e seu n�vel
			cout << "----------------------------------\n";
			cout << "   Pergunta n� " << (pergunta + 5) << " N�vel: Dif�cil.";
			cout << "\n----------------------------------";
			
			//Mostra a pergunta e alternativas ao usu�rio
			cout << "\n\nQuantos graus s�o necess�rio para que dois �ngulos sejam complementares?";
			
			//Alternativas
			cout << "\n\nA) 45�.";
			cout << "\nB) 60�.";
			cout << "\nC) 90�.";
			cout << "\nD) 180�.";
			
			//Cabe�alho lista de op��es - Separa��o
			cout << "\n\n----------------------------------\n";
			cout << "   LISTA DE OP��ES";
			cout << "\n----------------------------------";
			
			//Alternativas para escolha
			cout << "\n\n1 - RESPONDER.";
			cout << "\n2 - PULAR.";
			cout << "\n\nESCOLHA UMA DAS ALTERNATIVAS: ";
			cin >> escolha;
			
			//CONDICIONAL "SE" para escolhas - RESPONDER
			if(escolha == 1){
				cout << "\nQual � a resposta correta? ";
				cin >> resposta;
				if((resposta == 'c') || (resposta == 'C')){
					cout << "\nResposta correta!";
					acertos++;
					acertosDificil++;
					
					//EXPLICA��O DA RESPOSTA 
					cout << "\n\nEXPLICA��O: Os �ngulos complementares s�o �ngulos que juntos somam 90�.";
	
				}else{
					cout << "\nResposta incorreta!";
					cout << "\nResposta correta: Letra C";
					erros++;
					
					//EXPLICA��O DA RESPOSTA 
					cout << "\n\nEXPLICA��O: Os �ngulos complementares s�o �ngulos que juntos somam 90�.";
				}
				
				//Mostra que a pergunta foi respondida
				perguntaRespondida++;
				
				//Pula para a proxima quest�o
				cout << "\n-------------------------------------------------------------------------------\n";
				getchar();
				cout << "\nPressione \"enter\" para continuar...";
				getchar();
				system("CLS");
			}
			
			//CONDICIONAL "SE" para escolhas - PULAR
			if(escolha == 2){
				perguntaspuladas++;
				cout << "\n\nPressione \"enter\" para pular a quest�o";
				getchar();
				getchar();
				system("CLS");
			}

		//PERGUNTA 07 - DIF�CIL
		case 6:
			
			//Mostra o numero da pergunta e seu n�vel
			cout << "----------------------------------\n";
			cout << "   Pergunta n� " << (pergunta + 6) << " N�vel: Dif�cil.";
			cout << "\n----------------------------------";
			
			//Mostra a pergunta e alternativas ao usu�rio
			cout << "\n\nQual o maior animal terrestre?";
			
			//Alternativas
			cout << "\n\nA) Elefante Africano.";
			cout << "\nB) Girafa.";
			cout << "\nC) Dinossauro.";
			cout << "\nD) Tubar�o Branco.";
			
			//Cabe�alho lista de op��es - Separa��o
			cout << "\n\n----------------------------------\n";
			cout << "   LISTA DE OP��ES";
			cout << "\n----------------------------------";
			
			//Alternativas para escolha
			cout << "\n\n1 - RESPONDER.";
			cout << "\n2 - PULAR.";
			cout << "\n\nESCOLHA UMA DAS ALTERNATIVAS: ";
			cin >> escolha;
			
			//CONDICIONAL "SE" para escolhas - RESPONDER
			if(escolha == 1){
				cout << "\nQual � a resposta correta? ";
				cin >> resposta;
				if((resposta == 'a') || (resposta == 'A')){
					cout << "\nResposta correta!";
					acertos++;
					acertosDificil++;
					
					//EXPLICA��O DA RESPOSTA 
					cout << "\n\nEXPLICA��O: O elefante africano � o maior animal terrestre. Ele pode medir at� 4";
					cout << "metros de altura e 7 de comprimento. Seu peso pode chegar at� 8 toneladas.";
	
				}else{
					cout << "\nResposta incorreta!";
					cout << "\nResposta correta: Letra A";
					erros++;
					
					//EXPLICA��O DA RESPOSTA 
					cout << "\n\nEXPLICA��O: O elefante africano � o maior animal terrestre. Ele pode medir at� 4";
					cout << "metros de altura e 7 de comprimento. Seu peso pode chegar at� 8 toneladas.";
				}
				
				//Mostra que a pergunta foi respondida
				perguntaRespondida++;
				
				//Pula para a proxima quest�o
				cout << "\n-------------------------------------------------------------------------------\n";
				getchar();
				cout << "\nPressione \"enter\" para continuar...";
				getchar();
				system("CLS");
			}
			
			//CONDICIONAL "SE" para escolhas - PULAR
			if(escolha == 2){
				perguntaspuladas++;
				cout << "\n\nPressione \"enter\" para pular a quest�o";
				getchar();
				getchar();
				system("CLS");
			}

		//PERGUNTA 08 - DIF�CIL
		case 7:
			
			//Mostra o numero da pergunta e seu n�vel
			cout << "----------------------------------\n";
			cout << "   Pergunta n� " << (pergunta + 7) << " N�vel: Dif�cil.";
			cout << "\n----------------------------------";
			
			//Mostra a pergunta e alternativas ao usu�rio
			cout << "\n\nO que � um algoritmo?";
			
			//Alternativas
			cout << "\n\nA) � o mesmo que algarismo.";
			cout << "\nB) Um conjunto num�rico.";
			cout << "\nC) Um tipo de c�lculo.";
			cout << "\nD) Conjunto de regras necess�rias � resolu��o de um problema ou c�lculo.";
			
			//Cabe�alho lista de op��es - Separa��o
			cout << "\n\n----------------------------------\n";
			cout << "   LISTA DE OP��ES";
			cout << "\n----------------------------------";
			
			//Alternativas para escolha
			cout << "\n\n1 - RESPONDER.";
			cout << "\n2 - PULAR.";
			cout << "\n\nESCOLHA UMA DAS ALTERNATIVAS: ";
			cin >> escolha;
			
			//CONDICIONAL "SE" para escolhas - RESPONDER
			if(escolha == 1){
				cout << "\nQual � a resposta correta? ";
				cin >> resposta;
				if((resposta == 'd') || (resposta == 'D')){
					cout << "\nResposta correta!";
					acertos++;
					acertosDificil++;
					
					//EXPLICA��O DA RESPOSTA 
					cout << "\n\nEXPLICA��O: Um algoritmo � um conjunto de regras necess�rias � resolu��o de um";
					cout << "\nproblema ou c�lculo.";
					cout << "\n\nEXEMPLO: Por tr�s de todo esse jogo, h� um algoritmo, que � um conjunto de c�di-";
					cout << "gos.";
	
				}else{
					cout << "\nResposta incorreta!";
					cout << "\nResposta correta: Letra D";
					erros++;
					
					//EXPLICA��O DA RESPOSTA 
					cout << "\n\nEXPLICA��O: Um algoritmo � um conjunto de regras necess�rias � resolu��o de um";
					cout << "\nproblema ou c�lculo.";
					cout << "\n\nEXEMPLO: Por tr�s de todo esse jogo, h� um algoritmo, que � um conjunto de c�di-";
					cout << "gos.";
				}
				
				//Mostra que a pergunta foi respondida
				perguntaRespondida++;
				
				//Pula para a proxima quest�o
				cout << "\n-------------------------------------------------------------------------------\n";
				getchar();
				cout << "\nPressione \"enter\" para continuar...";
				getchar();
				system("CLS");
			}
			
			//CONDICIONAL "SE" para escolhas - PULAR
			if(escolha == 2){
				perguntaspuladas++;
				cout << "\n\nPressione \"enter\" para pular a quest�o";
				getchar();
				getchar();
				system("CLS");
			}
			
		//PERGUNTA 09 - DIF�CIL
		case 8:
			
			//Mostra o numero da pergunta e seu n�vel
			cout << "----------------------------------\n";
			cout << "   Pergunta n� " << (pergunta + 8) << " N�vel: Dif�cil.";
			cout << "\n----------------------------------";
			
			//Mostra a pergunta e alternativas ao usu�rio
			cout << "\n\nQuantas casas decimais tem o n�mero pi?";
			
			//Alternativas
			cout << "\n\nA) Duas.";
			cout << "\nB) Centenas.";
			cout << "\nC) Infinitas.";
			cout << "\nD) Milhares.";
			
			//Cabe�alho lista de op��es - Separa��o
			cout << "\n\n----------------------------------\n";
			cout << "   LISTA DE OP��ES";
			cout << "\n----------------------------------";
			
			//Alternativas para escolha
			cout << "\n\n1 - RESPONDER.";
			cout << "\n2 - PULAR.";
			cout << "\n\nESCOLHA UMA DAS ALTERNATIVAS: ";
			cin >> escolha;
			
			//CONDICIONAL "SE" para escolhas - RESPONDER
			if(escolha == 1){
				cout << "\nQual � a resposta correta? ";
				cin >> resposta;
				if((resposta == 'c') || (resposta == 'C')){
					cout << "\nResposta correta!";
					acertos++;
					acertosDificil++;
					
					//EXPLICA��O DA RESPOSTA 
					cout << "\n\nEXPLICA��O: Ao longo dos tempos, v�rios estudiosos t�m se dedicado a calcular";
					cout << " o n�mero pi e j� chegaram ao n�mero de 5 bilh�es de casas.";
	
				}else{
					cout << "\nResposta incorreta!";
					cout << "\nResposta correta: Letra C";
					erros++;
					
					//EXPLICA��O DA RESPOSTA 
					cout << "\n\nEXPLICA��O: Ao longo dos tempos, v�rios estudiosos t�m se dedicado a calcular";
					cout << " o n�mero pi e j� chegaram ao n�mero de 5 bilh�es de casas.";
				}
				
				//Mostra que a pergunta foi respondida
				perguntaRespondida++;
				
				//Pula para a proxima quest�o
				cout << "\n-------------------------------------------------------------------------------\n";
				getchar();
				cout << "\nPressione \"enter\" para continuar...";
				getchar();
				system("CLS");
			}
			
			//CONDICIONAL "SE" para escolhas - PULAR
			if(escolha == 2){
				perguntaspuladas++;
				cout << "\n\nPressione \"enter\" para pular a quest�o";
				getchar();
				getchar();
				system("CLS");
			}

		//PERGUNTA 10 - DIF�CIL
		case 9:
			
			//Mostra o numero da pergunta e seu n�vel
			cout << "----------------------------------\n";
			cout << "   Pergunta n� " << (pergunta + 9) << " N�vel: Dif�cil.";
			cout << "\n----------------------------------";
			
			//Mostra a pergunta e alternativas ao usu�rio
			cout << "\n\nQual foi a primeira pergunta desse jogo?";
			
			//Alternativas
			cout << "\n\nA) \"Quais o menor e maior pa�s do mundo?\".";
			cout << "\nB) \"Nome do Participante\".";
			cout << "\nC) \"O Dia do Fico � anualmente celebrado em que data?\".";
			cout << "\nD) \"O que � Brexit?\".";
			
			//Cabe�alho lista de op��es - Separa��o
			cout << "\n\n----------------------------------\n";
			cout << "   LISTA DE OP��ES";
			cout << "\n----------------------------------";
			
			//Alternativas para escolha
			cout << "\n\n1 - RESPONDER.";
			cout << "\n2 - PULAR.";
			cout << "\n\nESCOLHA UMA DAS ALTERNATIVAS: ";
			cin >> escolha;
			
			//CONDICIONAL "SE" para escolhas - RESPONDER
			if(escolha == 1){
				cout << "\nQual � a resposta correta? ";
				cin >> resposta;
				if((resposta == 'b') || (resposta == 'B')){
					cout << "\nResposta correta!";
					acertos++;
					acertosDificil++;
					
					//EXPLICA��O DA RESPOSTA 
					cout << "\n\nEXPLICA��O: A 1� pergunta feita nesse jogo foi a do \"Nome do Participante\".";
	
				}else{
					cout << "\nResposta incorreta!";
					cout << "\nResposta correta: Letra B";
					erros++;
					
					//EXPLICA��O DA RESPOSTA 
					cout << "\n\nEXPLICA��O: A 1� pergunta feita nesse jogo foi a do \"Nome do Participante\".";
				}
				
				//Mostra que a pergunta foi respondida
				perguntaRespondida++;
				
				//Pula para a proxima quest�o
				cout << "\n-------------------------------------------------------------------------------\n";
				getchar();
				cout << "\nPressione \"enter\" para continuar...";
				getchar();
				system("CLS");
			}
			
			//CONDICIONAL "SE" para escolhas - PULAR
			if(escolha == 2){
				perguntaspuladas++;
				cout << "\n\nPressione \"enter\" para pular a quest�o";
				getchar();
				getchar();
				system("CLS");
			}
			
			//Faz o break (quebra) do caso
			break;		
	}
	
	//Agradecimentos ao usu�rio
	cout << "================ MUITO OBRIGADO (A) =================\n";
	cout << "\nAqui fica o agradecimento do \"criador\" desse Jogo.";
	cout << "\nEspero que esse jogo possa ter sido divertido, e que";
	cout << " ele sirva para algo maior \ne mais importante que isso, ganhar conhecimento!";
	
	//Op��o para jogador pular pro placar
	cout << "\n-------------------------------------------------------------------------------\n";
	cout << "\nPressione \"enter\" para continuar...";
	getchar();
	system("CLS");
	
	//Mostra os resultados ao usu�rio
	cout << "================ RESULTADOS DO JOGO =================\n";
	cout << "\nParticipante: " << nome;
	cout << "\nPerguntas respondidas: " << perguntaRespondida;
	cout << "\nPerguntas puladas:...: " << perguntaspuladas;
	cout << "\nTotal de acertos.....: " << acertos;
	cout << "\nTotal de erros.......: " << erros;
	cout << "\nPontua��o total......: " << (acertosFacil * 2) + (acertosMedio * 3) + (acertosDificil * 5);
	
	
	//Cr�ditos
	cout << "\n\nCriado por: Pedro Dantas";
	cout << "\n\nGithub: https://github.com/Pedro0901";
	
	getchar();
	getchar();
	
	//Faz o retorno da fun��o
	return 0;
}
