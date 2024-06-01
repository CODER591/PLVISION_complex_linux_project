#We will make a setup via one command "make"

all:
	./setup_project_build.sh
	cd task1 && make all && cd ..
	cd task2 && make all && cd ..

clean:
	cd task1 && make clean && cd ..
	cd task2 && make clean && cd ..
	git clean -f