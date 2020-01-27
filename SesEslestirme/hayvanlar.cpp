#include "hayvanlar.h"
#include<iostream>
#include "Button.h"
#include<SFML\Window.hpp>
#include<SFML\Graphics.hpp>
#include <SFML/Audio.hpp>
#include<ctime>
#include <cstdlib>
#include<time.h>
#include "oyunlar.h"

#include <ctime>
#include <chrono>
#include<Windows.h>
using namespace std;
hayvanlar::hayvanlar()
{
	/////////////////////////////////////////////////////Rasgele farkl� 10 de�er �retme
	srand((unsigned)time(NULL));
	const int BOYUT = 10;
	int rastgeleSayi;
	bool dongu = true;

	int  dizi2[BOYUT] = { 0 };

	for (int i = 0; i < BOYUT; i++)
	{

		while (true)
		{

			rastgeleSayi = rand() % 10;

			if (dizi2[rastgeleSayi] == 0)

			{
				dizi2[rastgeleSayi] = i;
				break;

			}


		}

	}

	cout << "***  Dizi ***" << endl;
	for (int i = 0; i<BOYUT; i++)
	{
		cout << "dizi[" << i << "]:" << dizi2[i] << endl;
	}
///////////////////////////////////////////////////////////////////////////////

	//srand((unsigned)time(NULL));
	const int BOYUT2 = 10;
	int rastgeleSayi2;
	bool dongu2 = true;

	int  diziPng2[BOYUT2] = { 0 };

	for (int i = 0; i < BOYUT2; i++)
	{

		while (true)
		{

			rastgeleSayi2 = rand() % 10;

			if (diziPng2[rastgeleSayi2] == 0)

			{
				diziPng2[rastgeleSayi2] = i;
				break;

			}
		}
	}
	cout << "***  Dizi ***" << endl;
	for (int i = 0; i<BOYUT2; i++)
	{
		cout << "dizi2[" << i << "]:" << diziPng2[i] << endl;
	}
	/////////////////////////////////////////////////////////////////////

	int dizi[10][2] = { {100,280},{100,430},{ 100,580 },{ 100,730 },{ 100,880 },{ 450,280 },{ 450,430 },{ 450,580 },{ 450,730 },{ 450,880 } };        // Farkl� pozisyonlar�n tan�mlar�
	int diziPng[10][2] = { { 880,280 },{ 880,430 },{ 880,580 },{ 880,730 },{ 880,880 },{ 1230,280 },{ 1230,430 },{ 1230,580 },{ 1230,730 },{ 1230,880 } }; //Png ler i�in farkl� pozisyonlar tan�mlar
	int kontrol = -1;
	int puan = 0;
	int sayac = 0;
	
	sf::RenderWindow window(sf::VideoMode(1400, 1080), "Render Texture");
	sf::Font font1;
	sf::Text skor;
	sf::Text dead;
	sf::Texture arkaplan;
	sf::Texture finishBG;

	sf::SoundBuffer buffer;
	sf::SoundBuffer buffer2;
	sf::SoundBuffer buffer3;
	sf::SoundBuffer buffer4;
	sf::SoundBuffer buffer5;
	sf::SoundBuffer buffer6;
	sf::SoundBuffer buffer7;
	sf::SoundBuffer buffer8;
	sf::SoundBuffer buffer9;
	sf::SoundBuffer buffer10;

	if (finishBG.loadFromFile("images/farmFinish.PNG") == false)
	{
		std::cout << "resim y�klenemedi" << std::endl;
	}

	sf::Sprite sprite2;
	sf::Vector2u size2 = finishBG.getSize();
	sprite2.setOrigin(size2.x / 2, size2.y / 2);
	sprite2.setPosition(700, 480);
	sprite2.setScale(1.8, 1.9);

	if (arkaplan.loadFromFile("images/farmBG.jpg") == false)
	{
		std::cout << "resim y�klenemedi" << std::endl;
	}

	sf::Sprite sprite;
	sf::Vector2u size = arkaplan.getSize();
	sprite.setTexture(arkaplan);
	sprite.setOrigin(size.x / 2, size.y / 2);
	sprite.setPosition(700, 505);
	sprite.setScale(2.1, 2.3);

	if (!buffer.loadFromFile("sounds/kopek.wav"))
	{
		std::cout << "M�zik y�klenemedi" << std::endl;
	}
	sf::Sound dogSound;
	dogSound.setBuffer(buffer);
	
	if (!buffer2.loadFromFile("sounds/aslan.wav"))
	{
		std::cout << "M�zik y�klenemedi" << std::endl;
	}
	sf::Sound lionSound;
	lionSound.setBuffer(buffer2);

	if (!buffer3.loadFromFile("sounds/kedi.wav"))
	{
		std::cout << "M�zik y�klenemedi" << std::endl;
	}
	sf::Sound catSound;
	catSound.setBuffer(buffer3);

	if (!buffer4.loadFromFile("sounds/fil.wav"))
	{
		std::cout << "M�zik y�klenemedi" << std::endl;
	}
	sf::Sound elephantSound;
	elephantSound.setBuffer(buffer4);

	if (!buffer5.loadFromFile("sounds/ordek.wav"))
	{
		std::cout << "M�zik y�klenemedi" << std::endl;
	}
	sf::Sound duckSound;
	duckSound.setBuffer(buffer5);

	if (!buffer6.loadFromFile("sounds/kuzu.wav"))
	{
		std::cout << "M�zik y�klenemedi" << std::endl;
	}
	sf::Sound sheepSound;
	sheepSound.setBuffer(buffer6);

	if (!buffer7.loadFromFile("sounds/�nek.wav"))
	{
		std::cout << "M�zik y�klenemedi" << std::endl;
	}
	sf::Sound cowSound;
	cowSound.setBuffer(buffer7);

	if (!buffer8.loadFromFile("sounds/y�lan.wav"))
	{
		std::cout << "M�zik y�klenemedi" << std::endl;
	}
	sf::Sound snakeSound;
	snakeSound.setBuffer(buffer8);

	if (!buffer9.loadFromFile("sounds/kus.wav"))
	{
		std::cout << "M�zik y�klenemedi" << std::endl;
	}
	sf::Sound birdSound;
	birdSound.setBuffer(buffer9);

	if (!buffer10.loadFromFile("sounds/tavuk.wav"))
	{
		std::cout << "M�zik y�klenemedi" << std::endl;
	}
	sf::Sound chickenSound;
	chickenSound.setBuffer(buffer10);

	Button butonDizi[10];

	sf::Texture texture;
	texture.loadFromFile("images/soundsIcon.png");

	butonDizi[0].setParent(&window);
	butonDizi[0].setTexture(texture);

	butonDizi[1].setParent(&window);
	butonDizi[1].setTexture(texture);

	butonDizi[2].setParent(&window);
	butonDizi[2].setTexture(texture);

	butonDizi[3].setParent(&window);
	butonDizi[3].setTexture(texture);

	butonDizi[4].setParent(&window);
	butonDizi[4].setTexture(texture);

	butonDizi[5].setParent(&window);
	butonDizi[5].setTexture(texture);

	butonDizi[6].setParent(&window);
	butonDizi[6].setTexture(texture);

	butonDizi[7].setParent(&window);
	butonDizi[7].setTexture(texture);

	butonDizi[8].setParent(&window);
	butonDizi[8].setTexture(texture);

	butonDizi[9].setParent(&window);
	butonDizi[9].setTexture(texture);


	Button butonDiziPNG[10];

	sf::Texture textureDog;
	textureDog.loadFromFile("images/dog.png");
	butonDiziPNG[0].setParent(&window);
	butonDiziPNG[0].setTexture(textureDog);

	sf::Texture textureLion;
	textureLion.loadFromFile("images/lion.png");
	butonDiziPNG[1].setParent(&window);
	butonDiziPNG[1].setTexture(textureLion);

	sf::Texture textureCat;
	textureCat.loadFromFile("images/cat.png");
	butonDiziPNG[2].setParent(&window);
	butonDiziPNG[2].setTexture(textureCat);

	sf::Texture textureElephant;
	textureElephant.loadFromFile("images/elephant.png");
	butonDiziPNG[3].setParent(&window);
	butonDiziPNG[3].setTexture(textureElephant);

	sf::Texture textureDuck;
	textureDuck.loadFromFile("images/duck.png");
	butonDiziPNG[4].setParent(&window);
	butonDiziPNG[4].setTexture(textureDuck);

	sf::Texture textureSheep;
	textureSheep.loadFromFile("images/sheep.png");
	butonDiziPNG[5].setParent(&window);
	butonDiziPNG[5].setTexture(textureSheep);

	sf::Texture textureCow;
	textureCow.loadFromFile("images/cow.png");
	butonDiziPNG[6].setParent(&window);
	butonDiziPNG[6].setTexture(textureCow);

	sf::Texture textureSnake;
	textureSnake.loadFromFile("images/snake.png");
	butonDiziPNG[7].setParent(&window);
	butonDiziPNG[7].setTexture(textureSnake);

	sf::Texture textureBird;
	textureBird.loadFromFile("images/bird.png");
	butonDiziPNG[8].setParent(&window);
	butonDiziPNG[8].setTexture(textureBird);

	sf::Texture textureChicken;
	textureChicken.loadFromFile("images/chicken.png");
	butonDiziPNG[9].setParent(&window);
	butonDiziPNG[9].setTexture(textureChicken);

	if (!font1.loadFromFile("arial.ttf"))
	{
		std::cout << "font y�klenemedi" << std::endl;
	}

	skor.setFont(font1);
	skor.setFillColor(sf::Color::Black);
	skor.setString("Puan :" + std::to_string(puan));
	skor.setPosition(sf::Vector2f(7, 55));
	skor.setCharacterSize(40);
	skor.setStyle(sf::Text::Bold);

	dead.setFont(font1);
	dead.setFillColor(sf::Color::Black);
	dead.setPosition(sf::Vector2f(100, 240));
	dead.setCharacterSize(70);
	dead.setStyle(sf::Text::Bold);

	for (int i = 0; i < 10; i++)
	{
		butonDizi[i].setSize(sf::Vector2f(80, 80));
		butonDizi[i].setPosition(sf::Vector2f(dizi[dizi2[i]][0], dizi[dizi2[i]][1]));
		butonDiziPNG[i].setSize(sf::Vector2f(120, 120));
		butonDiziPNG[i].setPosition(sf::Vector2f(diziPng[diziPng2[i]][0], diziPng[diziPng2[i]][1]));
		
	}
	
	while (window.isOpen())
	{

		sf::Event event;

		while (window.pollEvent(event))
		{

			switch (event.type)
			{
			case sf::Event::KeyReleased:
				switch (event.key.code)
				{
				case::sf::Keyboard::Escape:
					/////////////////////////
					window.close();
					
					oyunlar::oyunlar();
				}
				break;
			case sf::Event::Closed:
				window.close();

				break;
				
			}
			if (butonDizi[0].isMouseOver())
			{
				dogSound.play();
				butonDizi[0].setSize(sf::Vector2f(130, 130));
			}
			else
			{
				butonDizi[0].setSize(sf::Vector2f(80, 80));
				dogSound.stop();
			}
			if (butonDizi[0].isMouseClick(sf::Mouse::Left))
			{
				kontrol= 0;
			}
			if (butonDizi[1].isMouseOver())
			{
				lionSound.play();
				butonDizi[1].setSize(sf::Vector2f(130, 130));
			}
			else
			{
				butonDizi[1].setSize(sf::Vector2f(80, 80));
				lionSound.stop();
			}
			if (butonDizi[1].isMouseClick(sf::Mouse::Left))
			{
				kontrol = 1;
			}
			if (butonDizi[2].isMouseOver())
			{
				catSound.play();
				butonDizi[2].setSize(sf::Vector2f(130, 130));
			}
			else
			{
				butonDizi[2].setSize(sf::Vector2f(80, 80));
				catSound.stop();
			}
			if (butonDizi[2].isMouseClick(sf::Mouse::Left))
			{
				kontrol = 2;
			}
			if (butonDizi[3].isMouseOver())
			{
				elephantSound.play();
				butonDizi[3].setSize(sf::Vector2f(130, 130));
			}
			else
			{
				butonDizi[3].setSize(sf::Vector2f(80, 80));
				elephantSound.stop();
			}
			if (butonDizi[3].isMouseClick(sf::Mouse::Left))
			{
				kontrol = 3;
			}
			if (butonDizi[4].isMouseOver())
			{
				duckSound.play();
				butonDizi[4].setSize(sf::Vector2f(130, 130));
			}
			else
			{
				butonDizi[4].setSize(sf::Vector2f(80, 80));
				duckSound.stop();
			}
			if (butonDizi[4].isMouseClick(sf::Mouse::Left))
			{
				kontrol = 4;
			}
			if (butonDizi[5].isMouseOver())
			{
				sheepSound.play();
				butonDizi[5].setSize(sf::Vector2f(130, 130));
			}
			else
			{
				butonDizi[5].setSize(sf::Vector2f(80, 80));
				sheepSound.stop();
			}
			if (butonDizi[5].isMouseClick(sf::Mouse::Left))
			{
				kontrol = 5;
			}
			if (butonDizi[6].isMouseOver())
			{
				cowSound.play();
				butonDizi[6].setSize(sf::Vector2f(130, 130));
			}
			else
			{
				butonDizi[6].setSize(sf::Vector2f(80, 80));
				cowSound.stop();
			}
			if (butonDizi[6].isMouseClick(sf::Mouse::Left))
			{
				kontrol = 6;
			}
			if (butonDizi[7].isMouseOver())
			{
				snakeSound.play();
				butonDizi[7].setSize(sf::Vector2f(130, 130));
			}
			else
			{
				butonDizi[7].setSize(sf::Vector2f(80, 80));
				snakeSound.stop();
			}
			if (butonDizi[7].isMouseClick(sf::Mouse::Left))
			{
				kontrol = 7;
			}
			if (butonDizi[8].isMouseOver())
			{
				birdSound.play();
				butonDizi[8].setSize(sf::Vector2f(130, 130));
			}
			else
			{
				butonDizi[8].setSize(sf::Vector2f(80, 80));
				birdSound.stop();
			}
			if (butonDizi[8].isMouseClick(sf::Mouse::Left))
			{
				kontrol = 8;
			}
			if (butonDizi[9].isMouseOver())
			{
				chickenSound.play();
				butonDizi[9].setSize(sf::Vector2f(130, 130));
			}
			else
			{
				butonDizi[9].setSize(sf::Vector2f(80, 80));
				chickenSound.stop();
			}
			if (butonDizi[9].isMouseClick(sf::Mouse::Left))
			{
				kontrol = 9;
			}
			//PNG event ayarlar�//

			if (butonDiziPNG[0].isMouseOver())
			{
				butonDiziPNG[0].setSize(sf::Vector2f(150, 150));
			}
			else
			{
				butonDiziPNG[0].setSize(sf::Vector2f(120, 120));
			}
			if (butonDiziPNG[0].isMouseClick(sf::Mouse::Left))
			{
				if (kontrol == 0)
				{
					cout << "dogru" << endl;
					puan = puan + 1;
					sayac = sayac + 1;
					skor.setString("Puan :" + std::to_string(puan));
					butonDiziPNG[0].setPosition(sf::Vector2f(-200, -200));
				}
				else {
					cout << "yanlis" << endl;
					kontrol = -1;
					puan = puan - 1;
					skor.setString("Puan :" + std::to_string(puan));
					
				}
					
			}

			if (butonDiziPNG[1].isMouseOver())
			{
				butonDiziPNG[1].setSize(sf::Vector2f(150, 150));
			}
			else
			{
				butonDiziPNG[1].setSize(sf::Vector2f(120, 120));
			}
			if (butonDiziPNG[1].isMouseClick(sf::Mouse::Left))
			{
				if (kontrol == 1)
				{
					cout << "dogru" << endl;
					puan = puan + 1;
					sayac = sayac + 1;
					skor.setString("Puan :" + std::to_string(puan));
					butonDiziPNG[1].setPosition(sf::Vector2f(-200, -200));
				}
				else {
					cout << "yanlis" << endl;
					kontrol = -1;
					puan = puan - 1;
					skor.setString("Puan :" + std::to_string(puan));
				}

			}
			if (butonDiziPNG[2].isMouseOver())
			{
				butonDiziPNG[2].setSize(sf::Vector2f(150, 150));
			}
			else
			{
				butonDiziPNG[2].setSize(sf::Vector2f(120, 120));
			}
			if (butonDiziPNG[2].isMouseClick(sf::Mouse::Left))
			{
				if (kontrol == 2)
				{
					cout << "dogru" << endl;
					puan = puan + 1;
					sayac = sayac + 1;
					skor.setString("Puan :" + std::to_string(puan));
					butonDiziPNG[2].setPosition(sf::Vector2f(-200, -200));
				}
				else {
					cout << "yanlis" << endl;
					kontrol = -1;
					puan = puan - 1;
					skor.setString("Puan :" + std::to_string(puan));
				}

			}
			if (butonDiziPNG[3].isMouseOver())
			{
				butonDiziPNG[3].setSize(sf::Vector2f(150, 150));
			}
			else
			{
				butonDiziPNG[3].setSize(sf::Vector2f(120, 120));
			}
			if (butonDiziPNG[3].isMouseClick(sf::Mouse::Left))
			{
				if (kontrol == 3)
				{
					cout << "dogru" << endl;
					puan = puan + 1;
					sayac = sayac + 1;
					skor.setString("Puan :" + std::to_string(puan));
					butonDiziPNG[3].setPosition(sf::Vector2f(-200, -200));
				}
				else {
					cout << "yanlis" << endl;
					kontrol = -1;
					puan = puan - 1;
					skor.setString("Puan :" + std::to_string(puan));
				}

			}
			if (butonDiziPNG[4].isMouseOver())
			{
				butonDiziPNG[4].setSize(sf::Vector2f(150, 150));
			}
			else
			{
				butonDiziPNG[4].setSize(sf::Vector2f(120, 120));
			}
			if (butonDiziPNG[4].isMouseClick(sf::Mouse::Left))
			{
				if (kontrol == 4)
				{
					cout << "dogru" << endl;
					puan = puan + 1;
					sayac = sayac + 1;
					skor.setString("Puan :" + std::to_string(puan));
					butonDiziPNG[4].setPosition(sf::Vector2f(-200, -200));
				}
				else {
					cout << "yanlis" << endl;
					kontrol = -1;
					puan = puan - 1;
					skor.setString("Puan :" + std::to_string(puan));
				}

			}
			if (butonDiziPNG[5].isMouseOver())
			{
				butonDiziPNG[5].setSize(sf::Vector2f(150, 150));
			}
			else
			{
				butonDiziPNG[5].setSize(sf::Vector2f(120, 120));
			}
			if (butonDiziPNG[5].isMouseClick(sf::Mouse::Left))
			{
				if (kontrol == 5)
				{
					cout << "dogru" << endl;
					puan = puan + 1;
					sayac = sayac + 1;
					skor.setString("Puan :" + std::to_string(puan));
					butonDiziPNG[5].setPosition(sf::Vector2f(-200, -200));
				}
				else {
					cout << "yanlis" << endl;
					kontrol = -1;
					puan = puan - 1;
					skor.setString("Puan :" + std::to_string(puan));
				}

			}
			if (butonDiziPNG[6].isMouseOver())
			{
				butonDiziPNG[6].setSize(sf::Vector2f(150, 150));
			}
			else
			{
				butonDiziPNG[6].setSize(sf::Vector2f(120, 120));
			}
			if (butonDiziPNG[6].isMouseClick(sf::Mouse::Left))
			{
				if (kontrol == 6)
				{
					cout << "dogru" << endl;
					puan = puan + 1;
					sayac = sayac + 1;
					skor.setString("Puan :" + std::to_string(puan));
					butonDiziPNG[6].setPosition(sf::Vector2f(-200, -200));
				}
				else {
					cout << "yanlis" << endl;
					kontrol = -1;
					puan = puan - 1;
					skor.setString("Puan :" + std::to_string(puan));
				}

			}
			if (butonDiziPNG[7].isMouseOver())
			{
				butonDiziPNG[7].setSize(sf::Vector2f(150, 150));
			}
			else
			{
				butonDiziPNG[7].setSize(sf::Vector2f(120, 120));
			}
			if (butonDiziPNG[7].isMouseClick(sf::Mouse::Left))
			{
				if (kontrol == 7)
				{
					cout << "dogru" << endl;
					puan = puan + 1;
					sayac = sayac + 1;
					skor.setString("Puan :" + std::to_string(puan));
					butonDiziPNG[7].setPosition(sf::Vector2f(-200, -200));
				}
				else {
					cout << "yanlis" << endl;
					kontrol = -1;
					puan = puan - 1;
					skor.setString("Puan :" + std::to_string(puan));
				}

			}
			if (butonDiziPNG[8].isMouseOver())
			{
				butonDiziPNG[8].setSize(sf::Vector2f(150, 150));
			}
			else
			{
				butonDiziPNG[8].setSize(sf::Vector2f(120, 120));
			}
			if (butonDiziPNG[8].isMouseClick(sf::Mouse::Left))
			{
				if (kontrol == 8)
				{
					cout << "dogru" << endl;
					puan = puan + 1;
					sayac = sayac + 1;
					skor.setString("Puan :" + std::to_string(puan));
					butonDiziPNG[8].setPosition(sf::Vector2f(-200, -200));
				}
				else {
					cout << "yanlis" << endl;
					kontrol = -1;
					puan = puan - 1;
					skor.setString("Puan :" + std::to_string(puan));
				}

			}
			if (butonDiziPNG[9].isMouseOver())
			{
				butonDiziPNG[9].setSize(sf::Vector2f(150, 150));
			}
			else
			{
				butonDiziPNG[9].setSize(sf::Vector2f(120, 120));
			}
			if (butonDiziPNG[9].isMouseClick(sf::Mouse::Left))
			{
				if (kontrol == 9)
				{
					cout << "dogru" << endl;
					puan = puan + 1;
					sayac = sayac + 1;
					skor.setString("Puan :" + std::to_string(puan));
					butonDiziPNG[9].setPosition(sf::Vector2f(-200, -200));
				}
				else {
					cout << "yanlis" << endl;
					kontrol = -1;
					puan = puan - 1;
					skor.setString("Puan :" + std::to_string(puan));
				}

			}
		}

		window.clear(sf::Color::White);
		window.draw(sprite);
		for (int i = 0; i < 10; i++)
		{
			window.draw(butonDizi[i]);
			window.draw(butonDiziPNG[i]);
		}

		if (sayac==10)
		{
			sprite2.setTexture(finishBG);
			if (puan==10)
			{
				dead.setString("Skorunuz :" + std::to_string(puan)+" Tebrikler oyunu kazand�n");
				
			}
			else if (puan<10 && puan >=8)
			{
				dead.setString("Skorunuz :" + std::to_string(puan) + " Kazanmaya �ok yakinsin \n                �alismaya devam...");
			}
			else if (puan<8 && puan >= 5)
			{
				dead.setString("Skorunuz :" + std::to_string(puan) + " Yolu yariladin b�yle \n               �alismaya devam et. ");
			}
			else if (puan<5 && puan >= 3)
			{
				dead.setString("Skorunuz :" + std::to_string(puan) + " �grenmeye ba�ladi�ini \n               g�r�yorum ");
			}
			else if (puan<3 && puan >= 0)
			{
				dead.setString("Skorunuz :" + std::to_string(puan) + " Biraz k�t� bir sonu� \n        ama �ali�arak �stesinden geliceksin.");
			}else
				dead.setString("Skorunuz :" + std::to_string(puan) + " Talihsizlik! �grenmeye \n             devam etmelisin.");
		}

		window.draw(skor);
		window.draw(sprite2);
		window.draw(dead);


		window.display();
	}

	
}


hayvanlar::~hayvanlar()
{
}
