# 1. Creación de Clases y Objetos
# a. Clase Persona
class Persona:
    def __init__(self, nombre, edad):
        self.nombre = nombre
        self.edad = edad

    def presentarse(self):
        print(f"Hola, mi nombre es {self.nombre} y tengo {self.edad} años.")

# b. Clase Estudiante
class Estudiante(Persona):
    def __init__(self, nombre, edad, universidad):
        super().__init__(nombre, edad)
        self.universidad = universidad

    def estudia_en(self):
        print(f"Estudio en la universidad {self.universidad}.")

# 2. Herencia y Sobrescritura
# a. Clase Profesor
class Profesor(Persona):
    def __init__(self, nombre, edad, asignatura):
        super().__init__(nombre, edad)
        self.asignatura = asignatura

    def presentarse(self):
        print(f"Hola, mi nombre es {self.nombre}, tengo {self.edad} años y enseño la asignatura de {self.asignatura}.")

# 3. Composición
# a. Clase Curso
class Curso:
    def __init__(self, nombre):
        self.nombre = nombre
        self.estudiantes = []

    def agregar_estudiante(self, estudiante):
        self.estudiantes.append(estudiante)

    def imprimir_estudiantes(self):
        print(f"Estudiantes en el curso {self.nombre}:")
        for estudiante in self.estudiantes:
            print(f"- {estudiante.nombre}")
