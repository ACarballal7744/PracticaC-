#pragma once
#include <iostream>
#include <string>
#include <list>
using namespace std;

struct persona {
	string nombre;
	string apellido;
};

class listaDeItPatagonia
{
	private:
		list <persona> personas;
		
	public:
		void agregarPersona(string nombre, string apellido) {
			persona ingresante;
			ingresante.nombre = nombre;
			ingresante.apellido = apellido;
			personas.push_back(ingresante);
		}

		void sacarPersona() {
			personas.pop_back();
		}

		list <persona> getListaPersonas() {
			return personas;
		}
		
		persona buscarPrimeraNombre() {
						
			for (persona nombre:personas)
			{
				return nombre;
			}

		}

		

		
};

