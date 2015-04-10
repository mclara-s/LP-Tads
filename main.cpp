
#include <iostream>

#include "stack.hpp"
#include "queue.hpp"
#include "deque.hpp"
#include "sequence.cpp"


int main() {
	Sequence<int> Seq, Seq2, Seq3;
/*	
	//TESTE IS EMPTY
	if(Seq.isEmpty())
		std::cout << "esta vazia\n";
	else
		std::cout << "nao esta vazia \n";
*/
	for (int i = 0; i < 10; i++){
		int x = i;
		if (!Seq.addFirst(x))
			std::cout << "erro ao add no\n";
		//if (!Seq2.addFirst(x))
		//	std::cout << "erro ao add no\n";
		//if (!Seq3.addFirst(-x))
		//	std::cout << "erro ao add no\n";
		//if (!Seq.addLast(-x))
			//std::cout << "erro ao add no\n";
	}

	std::cout << "Seq 1: \n";
	Seq.print();
//TESTE CONSTRUTOR DE COPIA
	Sequence<int> seqCopy(Seq);

	std::cout << "Seq de copia: \n";
	seqCopy.print();

/*
//TESTE ISINCREASING
	if (Seq.isIncreasing())
		std::cout <<"A sequencia eh crescente\n";
	else
		std::cout <<"A sequencia nao eh crescente\n"; 

*/
/*
//TEST IS DECREASING

	if (!Seq.isDecreasing())
		std::cout <<"A sequencia nao eh decrescente\n";
	else
		std::cout <<"A sequencia eh decrescente\n"; 
*/
/*  //TESTE BOUNDS
	int min, max;
	Seq.bounds(min, max);
	std::cout << "minimo: " << min << std::endl;
	std::cout << "maximo: " << max << std::endl;
*/

/*
	//TESTE SORT
	Seq.sort();
	std::cout << "\nOrdenando...\n" << std::endl;
	Seq.print();
	//Seq.reverse();
*/
/*	Seq.testSwap(4, 10);

	std::cout << "\nSwapping...\n" << std::endl;
	Seq.print();
	std::cout << "primeiro: " << Seq.getFirst() << std::endl;
	std::cout << "ultimo: "<< Seq.getLast() << std::endl;
 */

 /*	
	//TESTE IS EQUAL
	std::cout << "Seq 2: \n";
	Seq2.print();
	std::cout << "Seq 3: \n";
	Seq3.print();

	if (Seq.isEqual(Seq2))
		std::cout << "Seq1 = Seq2\n";
	else
		std::cout << "Seq1 != Seq2\n";

	if (Seq.isEqual(Seq3))
		std::cout << "Seq1 = Seq3\n";
	else
		std::cout << "Seq1 != Seq3\n";
*/

/*	//TESTE PRINT E TESTE GETSIZE
	Seq.print();
	std::cout << "tamanho: " << Seq.getSize()<< std::endl;

/*	//TESTE SEARCH
	int y = 2;
	if (Seq.search(y))
		std::cout << "elemento " << y << " encontrado!\n";
	else
		std::cout << "elemento " << y << " nao encontrado :(\n";
	y = 33;
	if (Seq.search(y))
		std::cout << "elemento " << y << " encontrado!\n";
	else
		std::cout << "elemento " << y << " nao encontrado :(\n";
*/
/*	
	//TESTE REMOVES
	Seq.removeFirst();
	Seq.removeLast();
	Seq.remove(-1);
	Seq.remove(44);
	Seq.remove(4);
	Seq.print();
*/	
/*	//TESTE ADD
	Seq.add(1000, -1);
	Seq.add(1000, 18);
	Seq.add(1000, 8);
	Seq.print();
*/
/*	std::cout << "removendo...\n";
	for (int i = 0; i < 10; i++){
		int x = i;
		Seq.removeLast();
		Seq.removeFirst();
		Seq.print();
		std::cout << "i: " << i << std::endl;
		std::cout << "tamanho: " << Seq.getSize()<< std::endl;
	}
*/	
/*	Stack<int> s;
	Queue<int> q;
	Deque<int> d;

	int array[] = { 5, 2, 8, 1, 4, 6, 9, 0, 7, 3 };

	for (int i = 0; i < 10; ++i) {
		s.push(array[i]);
		q.enqueue(array[i]);
		d.pushFront(array[i]);
	}

	// --- print stack
	while (!s.isEmpty()) {
		std::cout << s.pop() << std::endl;
	}

	// --- print queue
	while (!q.isEmpty()) {
		std::cout << q.dequeue() << std::endl;
	}

	// --- print deque
	while (!d.isEmpty()) {
		std::cout << d.popBack() << std::endl;
	}
*/
	return 0;
}