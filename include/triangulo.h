#ifndef TRIANGULO_H
#define TRIANGULO_H
#include <string>
/**
 * @file    triangulo.h
 * @brief   Cabeçalho da classe Triangulo
*/


class Triangulo{
	private:
		float base;  /*!< Valor base. */
		float altura; /*!< Valor altura. */
std::	string formaGeo;  /*!< Nome da forma. */

	public:
		//! Um construtor paramentizado.
    	/*!
      	recebe medidas da base, altura e o nome da forma.
      	*/
		Triangulo(float base_,float altura_,std::string formaGeo_);
		//!destrutor.
		~Triangulo();
		
		 //! Metodo que retorna um valor float referente o tamanho da base
		float getBase();
		
		//! Metodo que atribui um valor float ao tamanho da base
		/*!
			\param base_ um argumento float.
		*/
		void setBase(float base_);

		//! Metodo que retorna um valor float referente o tamanho da altura
		float getAltura();

		//! Metodo que atribui um valor float ao tamanho da altura
		/*!
			\param altura_ um argumento float.
		*/
		void setAltura(float altura_);

		//! Metodo que retorna um nome da forma geometrica
		std::string getFormaGeo();
		
		//! Metodo que atribui uma string ao nome da forma
		/*!
			\param formaGeo_ um argumento string.
		*/
		void setFormaGeo(std::string formaGeo_);

		//! Metodo que retorna um valor float referente o calculo do perimetro
		float getPerimetro();

		//! Metodo que retorna um valor float referente o calculo da area
		float getArea();
};

#endif

