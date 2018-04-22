#include "triangulo.h"


Triangulo::Triangulo(float base_,float altura_,std::string formaGeo_):base(base_),altura(altura_),formaGeo(formaGeo_){}

Triangulo::~Triangulo(){
}

float Triangulo::getBase(){
	return base;
}
void Triangulo::setBase(float base_){
	base = base_;
}

float Triangulo::getAltura(){
	return altura;
}
void Triangulo::setAltura(float altura_){
	altura = altura_;
}

std::string Triangulo::getFormaGeo(){
	return formaGeo;
}

void Triangulo::setFormaGeo(std::string formaGeo_){
	formaGeo = formaGeo_;
}

float Triangulo::getPerimetro(){
	return 2 * altura + base;
}

float Triangulo::getArea(){
	return altura * base;
}
