Algoritmo Ejercicio1
	definir x1,y1,x2,y2 Como Real
	definir pendiente,angulo,distancia Como Real
	Escribir "Ingresa las coordenadas "
	Escribir "X1: "	
	leer x1
	Escribir "Y1: "	
	leer y1
	Escribir "X2: "	
	leer x2
	Escribir "Y2: "	
	leer y2
	
	distancia=raiz((x2-x1)^2 + (y2-y1)^2)
	pendiente=(y2-y1)/(x2-x1)
	angulo = atan(pendiente)
	
	Escribir "La distancia es: ",distancia
	Escribir "El angulo mide: ",angulo
FinAlgoritmo