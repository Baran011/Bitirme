#include "farkBulma.h"
#include<SFML\Window.hpp>
#include<SFML\Graphics.hpp>
#include<vector>
#include<iostream>
#include"Button.h"
#include<windows.h>

sf::Texture image;
sf::Texture image2;
sf::Texture image3;
sf::Texture image4;
sf::Texture image5;

sf::Font font1;

sf::Text puan;
sf::Text sure;
sf::Sprite sprite;
sf::Sprite sprite2;
sf::Sprite sprite3;
sf::Sprite sprite4;

sf::Texture texture;
sf::Texture fark;
using namespace std;
farkBulma::farkBulma()
{
	bool denet1 = false, denet2 = false, denet3 = false, denet4 = false, denet5 = false, denet6 = false, denet7 = false;          //tüm butonlarýn kontrolü
	int fark1 = 0, fark2 = 0, fark3 = 0, fark4 = 0, fark5 = 0, fark6 = 0, fark7 = 0;											  //harita kontrolü
	int skor = 0;

	bool ilk = false, ilk2 = false, ilk3 = false, ilk4 = false, ilk5 = false, ilk6 = false, ilk7 = false;                               //Butonlarýn tekrar kontrolü

	sf::RenderWindow  window(sf::VideoMode(1400, 1080), "Fark Bulmaca");

	if (image.loadFromFile("images/farkBulma1.jpg") == false)
	{
		std::cout << "Resim Yüklenemedi" << std::endl;
	}
	if (!font1.loadFromFile("arial.ttf"))
	{
		std::cout << "font yüklenemedi" << std::endl;
	}
	if (image2.loadFromFile("images/farkBulma2.jpg") == false)
	{
		std::cout << "Resim Yüklenemedi" << std::endl;
	}
	if (image3.loadFromFile("images/farkBulma3.png") == false)
	{
		std::cout << "Resim Yüklenemedi" << std::endl;
	}
	if (image4.loadFromFile("images/farkBulma4.png") == false)
	{
		std::cout << "Resim Yüklenemedi" << std::endl;
	}

	if (image5.loadFromFile("images/farkBulma5.png") == false)
	{
		std::cout << "Resim Yüklenemedi" << std::endl;
	}

	fark.loadFromFile("images/carpi.png");

	puan.setFont(font1);
	puan.setFillColor(sf::Color::Black);
	puan.setString("Puan :"+std::to_string(skor));
	puan.setPosition(sf::Vector2f(0, 930));
	puan.setCharacterSize(60);
	puan.setStyle(sf::Text::Bold);

	sure.setFont(font1);
	sure.setFillColor(sf::Color::Black);
	sure.setString("Sure :" + std::to_string(skor));
	sure.setPosition(sf::Vector2f(230, 930));
	sure.setCharacterSize(60);
	sure.setStyle(sf::Text::Bold);

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
			case sf::Event::MouseButtonPressed:
				skor = skor + -2; 
				puan.setString("Puan :" + std::to_string(skor));
			}
		}

		

		//fark1 == 0 && fark2 == 0 && fark3 == 0 && fark4 == 0 && fark5 == 0 && fark6 == 0 && fark7 == 0
		if (fark1 == 0 && fark2 == 0 && fark3 == 0 && fark4 == 0 && fark5 == 0 && fark6 == 0 && fark7 == 0)
		{
			
			sf::Vector2u size = image.getSize();
			sprite.setTexture(image);
			sprite.setOrigin(size.x / 2, size.y / 2);
			sprite.setPosition(700, 470);
			sprite.setScale(2.2, 2.22);

			Button button;
			button.setParent(&window);
			button.setFillColor(sf::Color::Color::Transparent);
			button.setPosition(sf::Vector2f(220, 110));
			button.setSize(sf::Vector2f(80, 80));

			Button button2;
			button2.setParent(&window);
			button2.setFillColor(sf::Color::Color::Transparent);
			button2.setPosition(sf::Vector2f(220, 290));
			button2.setSize(sf::Vector2f(80, 80));

			Button button3;
			button3.setParent(&window);
			button3.setFillColor(sf::Color::Color::Transparent);
			button3.setPosition(sf::Vector2f(145, 550));
			button3.setSize(sf::Vector2f(80, 80));

			Button button4;
			button4.setParent(&window);
			button4.setFillColor(sf::Color::Color::Transparent);
			button4.setPosition(sf::Vector2f(470, 480));
			button4.setSize(sf::Vector2f(80, 160));

			Button button5;
			button5.setParent(&window);
			button5.setFillColor(sf::Color::Color::Transparent);
			button5.setPosition(sf::Vector2f(500, 850));
			button5.setSize(sf::Vector2f(80, 80));

			Button button6;
			button6.setParent(&window);
			button6.setFillColor(sf::Color::Color::Transparent);
			button6.setPosition(sf::Vector2f(260, 720));
			button6.setSize(sf::Vector2f(80, 80));

			Button button7;
			button7.setParent(&window);
			button7.setFillColor(sf::Color::Color::Transparent);
			button7.setPosition(sf::Vector2f(0, 780));
			button7.setSize(sf::Vector2f(80, 80));

			
			/////////////////////////////////////
			
			if (button.isMouseClick(sf::Mouse::Left))
			{
				if (!ilk) {
					skor = skor + 10;
				}
				button.setFillColor(sf::Color::Color::White);
				button.setTexture(fark);
				denet1 = true;
				ilk = true;
				puan.setString("Puan :" + std::to_string(skor));
			}
			if (button2.isMouseClick(sf::Mouse::Left))
			{
				if (!ilk2) {
					skor = skor + 10;
				}

				button2.setFillColor(sf::Color::Color::White);
				button2.setTexture(fark);
				denet2 = true;
				ilk2 = true;
				puan.setString("Puan :" + std::to_string(skor));
			}
			if (button3.isMouseClick(sf::Mouse::Left))
			{
				if (!ilk3) {
					skor = skor + 10;
				}

				button3.setFillColor(sf::Color::Color::White);
				button3.setTexture(fark);
				denet3 = true;
				ilk3 = true;
				puan.setString("Puan :" + std::to_string(skor));
			}
			if (button4.isMouseClick(sf::Mouse::Left))
			{
				if (!ilk4) {
					skor = skor + 10;
				}

				button4.setFillColor(sf::Color::Color::White);
				button4.setTexture(fark);
				denet4 = true;
				ilk4 = true;
				puan.setString("Puan :" + std::to_string(skor));
			}
			if (button5.isMouseClick(sf::Mouse::Left))
			{
				if (!ilk5) {
					skor = skor + 10;
				}

				button5.setFillColor(sf::Color::Color::White);
				button5.setTexture(fark);
				denet5 = true;
				ilk5 = true;
				puan.setString("Puan :" + std::to_string(skor));
			}
			if (button6.isMouseClick(sf::Mouse::Left))
			{
				if (!ilk6) {
					skor = skor + 10;
				}

				button6.setFillColor(sf::Color::Color::White);
				button6.setTexture(fark);
				denet6 = true;
				ilk6 = true;
				puan.setString("Puan :" + std::to_string(skor));
			}
			if (button7.isMouseClick(sf::Mouse::Left))
			{
				if (!ilk7) {
					skor = skor + 10;
				}

				button7.setFillColor(sf::Color::Color::White);
				button7.setTexture(fark);
				denet7 = true;
				ilk7 = true;
				puan.setString("Puan :" + std::to_string(skor));
			}

			if (denet1 && denet2 && denet3 && denet4 && denet5 && denet6 && denet7)
			{
				fark1 = 1; fark2 = 1; fark3 = 1; fark4 = 1; fark5 = 1; fark6 = 1; fark7 = 1;
			}

			window.clear();
			window.draw(sprite);
			window.draw(puan);
			window.draw(sure);
			window.draw(button);
			window.draw(button2);
			window.draw(button3);
			window.draw(button4);
			window.draw(button5);
			window.draw(button6);
			window.draw(button7);
			window.display();

		

		}
		//fark1 == 1 && fark2 == 1 && fark3 == 1 && fark4 == 1 && fark5 == 1 && fark6 == 1 && fark7 == 1
		if (fark1 == 1 && fark2 == 1 && fark3 == 1 && fark4 == 1 && fark5 == 1 && fark6 == 1 && fark7 == 1)
		{
			
			sf::Vector2u size = image.getSize();
			sprite.setTexture(image2);
			sprite.setOrigin(size.x / 2, size.y / 2);
			sprite.setPosition(700, 500);
			sprite.setScale(2.2, 2.3);

			Button button;
			button.setParent(&window);
			button.setFillColor(sf::Color::Color::Transparent);
			button.setPosition(sf::Vector2f(50, 315));
			button.setSize(sf::Vector2f(80, 80));

			Button button2;
			button2.setParent(&window);
			button2.setFillColor(sf::Color::Color::Transparent);
			button2.setPosition(sf::Vector2f(65, 0));
			button2.setSize(sf::Vector2f(80, 80));

			Button button3;
			button3.setParent(&window);
			button3.setFillColor(sf::Color::Color::Transparent);
			button3.setPosition(sf::Vector2f(290, 30));
			button3.setSize(sf::Vector2f(80, 80));

			Button button4;
			button4.setParent(&window);
			button4.setFillColor(sf::Color::Color::Transparent);
			button4.setPosition(sf::Vector2f(350, 550));
			button4.setSize(sf::Vector2f(80, 80));

			Button button5;
			button5.setParent(&window);
			button5.setFillColor(sf::Color::Color::Transparent);
			button5.setPosition(sf::Vector2f(456, 735));
			button5.setSize(sf::Vector2f(80, 80));

			Button button6;
			button6.setParent(&window);
			button6.setFillColor(sf::Color::Color::Transparent);
			button6.setPosition(sf::Vector2f(340, 720));
			button6.setSize(sf::Vector2f(80, 80));

			Button button7;
			button7.setParent(&window);
			button7.setFillColor(sf::Color::Color::Transparent);
			button7.setPosition(sf::Vector2f(0, 620));
			button7.setSize(sf::Vector2f(200, 80));

			/////////////////////////////////////

			if (button.isMouseClick(sf::Mouse::Left))
			{
				if (ilk) {
					skor = skor + 10;
				}

				button.setFillColor(sf::Color::Color::White);
				button.setTexture(fark);
				denet1 = false;
				ilk = false;
				puan.setString("Puan :" + std::to_string(skor));

			}
			if (button2.isMouseClick(sf::Mouse::Left))
			{
				if (ilk2) {
					skor = skor + 10;
				}

				button2.setFillColor(sf::Color::Color::White);
				button2.setTexture(fark);
				denet2 = false;
				ilk2 = false;
				puan.setString("Puan :" + std::to_string(skor));
			}
			if (button3.isMouseClick(sf::Mouse::Left))
			{
				if (ilk3) {
					skor = skor + 10;
				}

				button3.setFillColor(sf::Color::Color::White);
				button3.setTexture(fark);
				denet3 = false;
				ilk3 = false;
				puan.setString("Puan :" + std::to_string(skor));
			}
			if (button4.isMouseClick(sf::Mouse::Left))
			{
				if (ilk4) {
					skor = skor + 10;
				}

				button4.setFillColor(sf::Color::Color::White);
				button4.setTexture(fark);
				denet4 = false;
				ilk4 = false;
				puan.setString("Puan :" + std::to_string(skor));
			}
			if (button5.isMouseClick(sf::Mouse::Left))
			{
				if (ilk5) {
					skor = skor + 10;
				}

				button5.setFillColor(sf::Color::Color::White);
				button5.setTexture(fark);
				denet5 = false;
				ilk5 = false;
				puan.setString("Puan :" + std::to_string(skor));
			}
			if (button6.isMouseClick(sf::Mouse::Left))
			{
				if (ilk6) {
					skor = skor + 10;
				}

				button6.setFillColor(sf::Color::Color::White);
				button6.setTexture(fark);
				denet6 = false;
				ilk6 = false;
				puan.setString("Puan :" + std::to_string(skor));
			}
			if (button7.isMouseClick(sf::Mouse::Left))
			{
				if (ilk7) {
					skor = skor + 10;
				}

				button7.setFillColor(sf::Color::Color::White);
				button7.setTexture(fark);
				denet7 = false;
				ilk7 = false;
				puan.setString("Puan :" + std::to_string(skor));
			}
			if (!denet1 && !denet2 && !denet3 && !denet4 && !denet5 && !denet6 && !denet7)
			{
				fark1 = 2; fark2 = 2; fark3 = 2; fark4 = 2; fark5 = 2; fark6 = 2; fark7 = 2;
			}
			window.clear();
			window.draw(sprite);
			window.draw(puan);
			window.draw(button);
			window.draw(button2);
			window.draw(button3);
			window.draw(button4);
			window.draw(button5);
			window.draw(button6);
			window.draw(button7);
			window.display();
		}
		//fark1 == 2 && fark2 == 2 && fark3 == 2 && fark4 == 2 && fark5 == 2 && fark6 == 2 && fark7 == 2
		if (fark1 == 2 && fark2 == 2 && fark3 == 2 && fark4 == 2 && fark5 == 2 && fark6 == 2 && fark7 == 2)
		{

			sf::Vector2u size = image.getSize();
			sprite2.setTexture(image3);
			sprite2.setOrigin(size.x / 2, size.y / 2);
			sprite2.setPosition(265, 463);
			sprite2.setScale(0.88, 1.932);

			Button button;
			button.setParent(&window);
			button.setFillColor(sf::Color::Color::Transparent);
			button.setPosition(sf::Vector2f(0, 120));
			button.setSize(sf::Vector2f(80, 80));

			Button button2;
			button2.setParent(&window);
			button2.setFillColor(sf::Color::Color::Transparent);
			button2.setPosition(sf::Vector2f(115, 290));
			button2.setSize(sf::Vector2f(80, 80));

			Button button3;
			button3.setParent(&window);
			button3.setFillColor(sf::Color::Color::Transparent);
			button3.setPosition(sf::Vector2f(330, 385));
			button3.setSize(sf::Vector2f(80, 80));

			Button button4;
			button4.setParent(&window);
			button4.setFillColor(sf::Color::Color::Transparent);
			button4.setPosition(sf::Vector2f(565, 480));
			button4.setSize(sf::Vector2f(80, 80));

			Button button5;
			button5.setParent(&window);
			button5.setFillColor(sf::Color::Color::Transparent);
			button5.setPosition(sf::Vector2f(590, 755));
			button5.setSize(sf::Vector2f(80, 80));

			Button button6;
			button6.setParent(&window);
			button6.setFillColor(sf::Color::Color::Transparent);
			button6.setPosition(sf::Vector2f(260, 830));
			button6.setSize(sf::Vector2f(80, 80));

			Button button7;
			button7.setParent(&window);
			button7.setFillColor(sf::Color::Color::Transparent);
			button7.setPosition(sf::Vector2f(50, 800));
			button7.setSize(sf::Vector2f(80, 80));

			/////////////////////////////////////

			if (button.isMouseClick(sf::Mouse::Left))
			{
				if (!ilk) {
					skor = skor + 10;
				}

				button.setFillColor(sf::Color::Color::White);
				button.setTexture(fark);
				denet1 = true;
				ilk = true;
				puan.setString("Puan :" + std::to_string(skor));

			}
			if (button2.isMouseClick(sf::Mouse::Left))
			{
				if (!ilk2) {
					skor = skor + 10;
				}

				button2.setFillColor(sf::Color::Color::White);
				button2.setTexture(fark);
				denet2 = true;
				ilk2 = true;
				puan.setString("Puan :" + std::to_string(skor));
			}
			if (button3.isMouseClick(sf::Mouse::Left))
			{
				if (!ilk3) {
					skor = skor + 10;
				}

				button3.setFillColor(sf::Color::Color::White);
				button3.setTexture(fark);
				denet3 = true;
				ilk3 = true;
				puan.setString("Puan :" + std::to_string(skor));
			}
			if (button4.isMouseClick(sf::Mouse::Left))
			{
				if (!ilk4) {
					skor = skor + 10;
				}

				button4.setFillColor(sf::Color::Color::White);
				button4.setTexture(fark);
				denet4 = true;
				ilk4 = true;
				puan.setString("Puan :" + std::to_string(skor));
			}
			if (button5.isMouseClick(sf::Mouse::Left))
			{
				if (!ilk5) {
					skor = skor + 10;
				}

				button5.setFillColor(sf::Color::Color::White);
				button5.setTexture(fark);
				denet5 = true;
				ilk5 = true;
				puan.setString("Puan :" + std::to_string(skor));
			}
			if (button6.isMouseClick(sf::Mouse::Left))
			{
				if (!ilk6) {
					skor = skor + 10;
				}

				button6.setFillColor(sf::Color::Color::White);
				button6.setTexture(fark);
				denet6 = true;
				ilk6 = true;
				puan.setString("Puan :" + std::to_string(skor));
			}
			if (button7.isMouseClick(sf::Mouse::Left))
			{
				if (!ilk7) {
					skor = skor + 10;
				}

				button7.setFillColor(sf::Color::Color::White);
				button7.setTexture(fark);
				denet7 = true;
				ilk7 = true;
				puan.setString("Puan :" + std::to_string(skor));
			}
			if (denet1 && denet2 && denet3 && denet4 && denet5 && denet6 && denet7)
			{
				fark1 = 3; fark2 = 3; fark3 = 3; fark4 = 3; fark5 = 3; fark6 = 3; fark7 = 3;
			}
			window.clear();
			window.draw(sprite2);
			window.draw(puan);
			window.draw(button);
			window.draw(button2);
			window.draw(button3);
			window.draw(button4);
			window.draw(button5);
			window.draw(button6);
			window.draw(button7);
			window.display();
		}
		//fark1 == 3 && fark2 == 3 && fark3 == 3 && fark4 == 3 && fark5 == 3 && fark6 == 3 && fark7 == 3
		if (fark1 == 3 && fark2 == 3 && fark3 == 3 && fark4 == 3 && fark5 == 3 && fark6 == 3 && fark7 == 3)
		{

			sf::Vector2u size = image.getSize();
			sprite3.setTexture(image4);
			sprite3.setOrigin(size.x / 2, size.y / 2);
			sprite3.setPosition(262, 380);
			sprite3.setScale(0.85, 1.6);

			Button button;
			button.setParent(&window);
			button.setFillColor(sf::Color::Color::Transparent);
			button.setPosition(sf::Vector2f(480, 100));
			button.setSize(sf::Vector2f(80, 80));

			Button button2;
			button2.setParent(&window);
			button2.setFillColor(sf::Color::Color::Transparent);
			button2.setPosition(sf::Vector2f(520, 185));
			button2.setSize(sf::Vector2f(60, 60));

			Button button3;
			button3.setParent(&window);
			button3.setFillColor(sf::Color::Color::Transparent);
			button3.setPosition(sf::Vector2f(340, 640));
			button3.setSize(sf::Vector2f(80, 80));

			Button button4;
			button4.setParent(&window);
			button4.setFillColor(sf::Color::Color::Transparent);
			button4.setPosition(sf::Vector2f(645, 450));
			button4.setSize(sf::Vector2f(80, 80));

			Button button5;
			button5.setParent(&window);
			button5.setFillColor(sf::Color::Color::Transparent);
			button5.setPosition(sf::Vector2f(470, 850));
			button5.setSize(sf::Vector2f(80, 80));

			Button button6;
			button6.setParent(&window);
			button6.setFillColor(sf::Color::Color::Transparent);
			button6.setPosition(sf::Vector2f(290, 845));
			button6.setSize(sf::Vector2f(80, 80));

			Button button7;
			button7.setParent(&window);
			button7.setFillColor(sf::Color::Color::Transparent);
			button7.setPosition(sf::Vector2f(110, 775));
			button7.setSize(sf::Vector2f(80, 80));

			/////////////////////////////////////

			if (button.isMouseClick(sf::Mouse::Left))
			{
				if (ilk) {
					skor = skor + 10;
				}

				button.setFillColor(sf::Color::Color::White);
				button.setTexture(fark);
				denet1 = false;
				ilk = false;
				puan.setString("Puan :" + std::to_string(skor));

			}
			if (button2.isMouseClick(sf::Mouse::Left))
			{
				if (ilk2) {
					skor = skor + 10;
				}

				button2.setFillColor(sf::Color::Color::White);
				button2.setTexture(fark);
				denet2 = false;
				ilk2 = false;
				puan.setString("Puan :" + std::to_string(skor));
			}
			if (button3.isMouseClick(sf::Mouse::Left))
			{
				if (ilk3) {
					skor = skor + 10;
				}

				button3.setFillColor(sf::Color::Color::White);
				button3.setTexture(fark);
				denet3 = false;
				ilk3 = false;
				puan.setString("Puan :" + std::to_string(skor));
			}
			if (button4.isMouseClick(sf::Mouse::Left))
			{
				if (ilk4) {
					skor = skor + 10;
				}

				button4.setFillColor(sf::Color::Color::White);
				button4.setTexture(fark);
				denet4 = false;
				ilk4 = false;
				puan.setString("Puan :" + std::to_string(skor));
			}
			if (button5.isMouseClick(sf::Mouse::Left))
			{
				if (ilk5) {
					skor = skor + 10;
				}

				button5.setFillColor(sf::Color::Color::White);
				button5.setTexture(fark);
				denet5 = false;
				ilk5 = false;
				puan.setString("Puan :" + std::to_string(skor));
			}
			if (button6.isMouseClick(sf::Mouse::Left))
			{
				if (ilk6) {
					skor = skor + 10;
				}

				button6.setFillColor(sf::Color::Color::White);
				button6.setTexture(fark);
				denet6 = false;
				ilk6 = false;
				puan.setString("Puan :" + std::to_string(skor));
			}
			if (button7.isMouseClick(sf::Mouse::Left))
			{
				if (ilk7) {
					skor = skor + 10;
				}

				button7.setFillColor(sf::Color::Color::White);
				button7.setTexture(fark);
				denet7 = false;
				ilk7 = false;
				puan.setString("Puan :" + std::to_string(skor));
			}
			if (!denet1 && !denet2 && !denet3 && !denet4 && !denet5 && !denet6 && !denet7)
			{
				fark1 = 4; fark2 = 4; fark3 = 4; fark4 = 4; fark5 = 4; fark6 = 4; fark7 = 4;
			}
			window.clear();
			window.draw(sprite3);
			window.draw(puan);
			window.draw(button);
			window.draw(button2);
			window.draw(button3);
			window.draw(button4);
			window.draw(button5);
			window.draw(button6);
			window.draw(button7);
			window.display();
		}
		//fark1 == 4 && fark2 == 4 && fark3 == 4 && fark4 == 4 && fark5 == 4 && fark6 == 4 && fark7 == 4
		if (fark1 == 4 && fark2 == 4 && fark3 == 4 && fark4 == 4 && fark5 == 4 && fark6 == 4 && fark7 == 4)
		{

			sf::Vector2u size = image.getSize();
			sprite4.setTexture(image5);
			sprite4.setOrigin(size.x / 2, size.y / 2);
			sprite4.setPosition(266, 380);
			sprite4.setScale(0.835, 1.6);

			Button button;
			button.setParent(&window);
			button.setFillColor(sf::Color::Color::Transparent);
			button.setPosition(sf::Vector2f(300, 190));
			button.setSize(sf::Vector2f(80, 80));

			Button button2;
			button2.setParent(&window);
			button2.setFillColor(sf::Color::Color::Transparent);
			button2.setPosition(sf::Vector2f(600, 700));
			button2.setSize(sf::Vector2f(80, 80));

			Button button3;
			button3.setParent(&window);
			button3.setFillColor(sf::Color::Color::Transparent);
			button3.setPosition(sf::Vector2f(310, 670));
			button3.setSize(sf::Vector2f(80, 80));

			Button button4;
			button4.setParent(&window);
			button4.setFillColor(sf::Color::Color::Transparent);
			button4.setPosition(sf::Vector2f(30, 450));
			button4.setSize(sf::Vector2f(80, 80));

			Button button5;
			button5.setParent(&window);
			button5.setFillColor(sf::Color::Color::Transparent);
			button5.setPosition(sf::Vector2f(380, 580));
			button5.setSize(sf::Vector2f(80, 80));

			Button button6;
			button6.setParent(&window);
			button6.setFillColor(sf::Color::Color::Transparent);
			button6.setPosition(sf::Vector2f(205, 650));
			button6.setSize(sf::Vector2f(60, 80));

			Button button7;
			button7.setParent(&window);
			button7.setFillColor(sf::Color::Color::Transparent);
			button7.setPosition(sf::Vector2f(110, 610));
			button7.setSize(sf::Vector2f(80, 80));

			/////////////////////////////////////

			if (button.isMouseClick(sf::Mouse::Left))
			{
				if (!ilk) {
					skor = skor + 10;
				}

				button.setFillColor(sf::Color::Color::White);
				button.setTexture(fark);
				denet1 = true;
				ilk = true;
				puan.setString("Puan :" + std::to_string(skor));

			}
			if (button2.isMouseClick(sf::Mouse::Left))
			{
				if (!ilk2) {
					skor = skor + 10;
				}

				button2.setFillColor(sf::Color::Color::White);
				button2.setTexture(fark);
				denet2 = true;
				ilk2 = true;
				puan.setString("Puan :" + std::to_string(skor));
			}
			if (button3.isMouseClick(sf::Mouse::Left))
			{
				if (!ilk3) {
					skor = skor + 10;
				}

				button3.setFillColor(sf::Color::Color::White);
				button3.setTexture(fark);
				denet3 = true;
				ilk3 = true;
				puan.setString("Puan :" + std::to_string(skor));
			}
			if (button4.isMouseClick(sf::Mouse::Left))
			{
				if (!ilk4) {
					skor = skor + 10;
				}

				button4.setFillColor(sf::Color::Color::White);
				button4.setTexture(fark);
				denet4 = true;
				ilk4 = true;
				puan.setString("Puan :" + std::to_string(skor));
			}
			if (button5.isMouseClick(sf::Mouse::Left))
			{
				if (!ilk5) {
					skor = skor + 10;
				}

				button5.setFillColor(sf::Color::Color::White);
				button5.setTexture(fark);
				denet5 = true;
				ilk5 = true;
				puan.setString("Puan :" + std::to_string(skor));
			}
			if (button6.isMouseClick(sf::Mouse::Left))
			{
				if (!ilk6) {
					skor = skor + 10;
				}

				button6.setFillColor(sf::Color::Color::White);
				button6.setTexture(fark);
				denet6 = true;
				ilk6 = true;
				puan.setString("Puan :" + std::to_string(skor));
			}
			if (button7.isMouseClick(sf::Mouse::Left))
			{
				if (!ilk7) {
					skor = skor + 10;
				}

				button7.setFillColor(sf::Color::Color::White);
				button7.setTexture(fark);
				denet7 = true;
				ilk7 = true;
				puan.setString("Puan :" + std::to_string(skor));
			}
			if (denet1 && denet2 && denet3 && denet4 && denet5 && denet6 && denet7)
			{
				cout << "farklar bulundu";
				//fark1 = 4; fark2 = 4; fark3 = 4; fark4 = 4; fark5 = 4; fark6 = 4; fark7 = 4;
			}
			window.clear();
			window.draw(sprite4);
			window.draw(puan);
			window.draw(button);
			window.draw(button2);
			window.draw(button3);
			window.draw(button4);
			window.draw(button5);
			window.draw(button6);
			window.draw(button7);
			window.display();
		}
	}
	
}


farkBulma::~farkBulma()
{
}
