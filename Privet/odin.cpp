
#include<iostream>
#include<random>

int read_answer(){
	int rezult;
	std::cout <<"�������� �� 1 �� 3 ������" << std::endl;
	std::cin >>rezult;
	while (rezult > 3 or rezult < 1) {
		std::cerr << "�������� �����, ����� ����� ������ �� 1 �� 3 ������" << std::endl;
		std::cout << "�������� �� 1 �� 3 ������" << std::endl;
		std::cin >>rezult;
	}
	return rezult;

}
int main()
{
	std::random_device rd;
	std::ranlux48 rnd { rd() };
	std::uniform_int_distribution<> dist1 {15, 25};
	int a;
	std::uniform_int_distribution<> dist2 {1, 3};
	int d1 = dist1 (rnd);
	int d2;
	std::cout << "������ ������: " << d1  <<std::endl;
	for (unsigned i=0; d1>0; ++i){

		if( i%2 == 0)
		{

		a=read_answer();
		std::cout << "�������� " <<(d1 - a) <<" ������ " << std::endl;
		d1-=a;
		}
		else{
			d2=dist2(rnd);
			std::cout << "��������� ���� ������ - " << d2 << ". ������ ��������: " << (d1-d2) << std::endl;
			d1-=d2;
		}
	}
    return 0;
}
