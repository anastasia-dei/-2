
#include<iostream>
#include<random>
int main()
{

	std::random_device rd;
	std::ranlux48 rnd { rd() };
	std::uniform_int_distribution<> dist1 {15, 25};
	int a;
	std::uniform_int_distribution<> dist2 {1, 3};
	int d1 = dist1 (rnd);
	int d2;
	std::cout << "сейчас камней: " << d1  <<std::endl;
	for (unsigned i=0; d1>0; ++i){

		if( i%2 == 0)
		{
		std::cout << "Введите кол-во камней, которое вы возьмете : " << std::endl;
		std::cin >> a;
		std::cout << "Осталось " <<(d1 - a) <<"камней " << std::endl;
		d1-=a;
		}
		else{
			d2=dist2(rnd);
			std::cout << "компьютер взял камней - " << d2 << ". Камней осталось: " << (d1-d2) << std::endl;
			d1-=d2;
		}
	}
    return 0;
}
