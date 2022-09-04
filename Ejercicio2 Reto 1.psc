Algoritmo Ejercicio2
	Definir costoentrada,numentrada,respuesta Como Entero
	//ingresar datos
	Escribir "Ingresar costo de entrada: "
	Leer costoentrada
	Escribir "Ingresar numero de entradas(menor a 5): "
	Leer numentrada
	//limitar a 5 entradas
	Mientras numentrada>=5 Hacer
		Escribir "Ingresar numero de entradas(menor a 5): "
		Leer numentrada
	Fin Mientras
	
	respuesta=costoentrada
		Si numentrada=2 Entonces
			respuesta=costoentrada*2-(costoentrada*2)*0.1
		Fin Si
		Si numentrada=3 Entonces
			respuesta=costoentrada*3-(costoentrada*3)*0.15
		Fin Si
		Si numentrada=4 Entonces
			respuesta=costoentrada*4-(costoentrada*4)*0.2
		Fin Si
		Escribir "El costo es: ",respuesta

FinAlgoritmo