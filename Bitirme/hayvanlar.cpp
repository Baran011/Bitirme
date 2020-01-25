#include "hayvanlar.h"
#include<iostream>
#include "Button.h"
#include<SFML\Window.hpp>
#include<SFML\Graphics.hpp>
#include <SFML/Audio.hpp>
#include<ctime>
#include <cstdlib>
#include<time.h>

using namespace std;
hayvanlar::hayvanlar()
{
	/////////////////////////////////////////////////////Rasgele farklý 10 deðer üretme
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

	int dizi[10][2] = { {100,200},{100,350},{ 100,500 },{ 100,650 },{ 100,800 },{ 450,200 },{ 450,350 },{ 450,500 },{ 450,650 },{ 450,800 } };        // Farklý pozisyonlarýn tanýmlarý
	int diziPng[10][2] = { { 880,200 },{ 880,350 },{ 880,500 },{ 880,650 },{ 880,800 },{ 1230,200 },{ 1230,350 },{ 1230,500 },{ 1230,650 },{ 1230,800 } }; //Png ler için farklý pozisyonlar tanýmlar

	sf::RenderWindow window(sf::VideoMode(1400, 1080), "Render Texture");
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

	if (!buffer.loadFromFile("sounds/kopek.wav"))
	{
		std::cout << "Müzik yüklenemedi" << std::endl;
	}
	sf::Sound dogSound;
	dogSound.setBuffer(buffer);
	
	if (!buffer2.loadFromFile("sounds/aslan.wav"))
	{
		std::cout << "Müzik yüklenemedi" << std::endl;
	}
	sf::Sound lionSound;
	lionSound.setBuffer(buffer2);

	if (!buffer3.loadFromFile("sounds/kedi.wav"))
	{
		std::cout << "Müzik yüklenemedi" << std::endl;
	}
	sf::Sound catSound;
	catSound.setBuffer(buffer3);

	if (!buffer4.loadFromFile("sounds/fil.wav"))
	{
		std::cout << "Müzik yüklenemedi" << std::endl;
	}
	sf::Sound elephantSound;
	elephantSound.setBuffer(buffer4);

	if (!buffer5.loadFromFile("sounds/ordek.wav"))
	{
		std::cout << "Müzik yüklenemedi" << std::endl;
	}
	sf::Sound duckSound;
	duckSound.setBuffer(buffer5);

	if (!buffer6.loadFromFile("sounds/kuzu.wav"))
	{
		std::cout << "Müzik yüklenemedi" << std::endl;
	}
	sf::Sound sheepSound;
	sheepSound.setBuffer(buffer6);

	if (!buffer7.loadFromFile("sounds/ýnek.wav"))
	{
		std::cout << "Müzik yüklenemedi" << std::endl;
	}
	sf::Sound cowSound;
	cowSound.setBuffer(buffer7);

	if (!buffer8.loadFromFile("sounds/yýlan.wav"))
	{
		std::cout << "Müzik yüklenemedi" << std::endl;
	}
	sf::Sound snakeSound;
	snakeSound.setBuffer(buffer8);

	if (!buffer9.loadFromFile("sounds/kus.wav"))
	{
		std::cout << "Müzik yüklenemedi" << std::endl;
	}
	sf::Sound birdSound;
	birdSound.setBuffer(buffer9);

	if (!buffer10.loadFromFile("sounds/tavuk.wav"))
	{
		std::cout << "Müzik yüklenemedi" << std::endl;
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

	sf::Texture textureCat;
	textureCat.loadFromFile("images/cat.png");
	butonDiziPNG[1].setParent(&window);
	butonDiziPNG[1].setTexture(textureCat);

	sf::Texture textureLion;
	textureLion.loadFromFile("images/lion.png");
	butonDiziPNG[2].setParent(&window);
	butonDiziPNG[2].setTexture(textureLion);

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

			}

		}

		window.clear(sf::Color::White);
		for (int i = 0; i < 10; i++)
		{
			window.draw(butonDizi[i]);
			window.draw(butonDiziPNG[i]);
		}
		
		window.display();
	}

	
}


hayvanlar::~hayvanlar()
{
}
