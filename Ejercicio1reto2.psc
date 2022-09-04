Algoritmo Ejercicio1reto2

	Definir altura,peso,IMC Como Real
	Escribir "Ingrese su peso: "
	leer peso
	Escribir "Ingrese su altura en metros: "
	leer altura
	
	IMC<-peso/altura/altura
	Escribir "IMC: ",IMC
	
	Si IMC<15 Entonces
		Escribir "Diagnostico: Criterio de ingreso en hospital"
	SiNo
		Si IMC>=15 y IMC<=20 Entonces
			Escribir "Diagnostico: Bajo peso"
		SiNo
			Si IMC>20 y IMC<=30 Entonces
				Escribir "Diagnostico: Peso normal(saludable)"
			SiNo
				Si IMC>30 y IMC<=40 Entonces
					Escribir "Diagnostico: Sobrepeso(Obesidad grado I)"
				SiNo
					Si IMC>40 Entonces
						Escribir "Diagnostico: Sobrepeso cronico(obesidad de grado II)"
					Fin Si
				Fin Si
			Fin Si
		Fin Si
	Fin Si
	
	
FinAlgoritmo
