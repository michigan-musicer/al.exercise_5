exercises: e5_exercises.c
	gcc e5_exercises.c e5_exercises.h -o exercises
	./exercises

# should not be accessible to students before solution is posted.
exercises_solution: e5_exercises_solutions.c
	gcc e5_exercises_solutions.c e5_exercises.h -o exercises_solution
	./exercises_solution

in_class: e5_in_class_practice.c
	gcc e5_in_class_practice.c e5_in_class_practice.h -o in_class
	./in_class

clean: 
	rm exercises exercises_solution in_class 
