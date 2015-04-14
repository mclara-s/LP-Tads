//PARA COMPILAR VIA TERMINAL: g++ sequence.cpp main.cpp -std=c++11 -o programa

#include <iostream>

#include "stack.hpp"
#include "queue.hpp"
#include "deque.hpp"
#include "sequence.cpp"


int main() {
	Sequence<int> Seq, Seq2;
	int i;
	/**
	Como os métodos isEmpty(), getSize(), clear(), copy() e swap() já sao usados em outros metodos,
	eles não serão testados no main.
	**/

	//TESTE ADDFIRST
	std::cout << "## Teste addFirst: \n";
	for (i = 2; i <= 4; i++){
		if (!Seq.addFirst(i))
			std::cout << "erro ao add no\n";
	}
	std::cout << "Elementos adicionados com sucesso\n";

	//TESTE PRINT
	std::cout << "Seq 1:\t";
	Seq.print();

	//TESTE ADDLAST
	std::cout << "\n## Teste addLast():\n";
	std::cout << "Seq 1:\t";
	Seq.addLast(1);
	Seq.addLast(0);
	Seq.print();

	//TESTE ADD
	std::cout << "\n## Teste add():\t(indices iniciam no 0)\n";
	std::cout << "Seq 1:\n";
	std::cout << "Add posicao 2:\t";
	Seq.add(1111, 2);
	Seq.print();
	std::cout << "Add posicao -1\t";
	Seq.add(1111, -1);
	Seq.print();
	std::cout << "Add posicao 100\t";
	Seq.add(1111, 100);
	Seq.print();
	
	//TESTE REMOVE FIRST
	std::cout << "\n## Teste removeFirst():\n";
	std::cout << "Seq 1:\t";
	Seq.removeFirst();
	Seq.print();

	//TESTE REMOVELAST
	std::cout << "\n## Teste removeLast():\n";
	std::cout << "Seq 1:\t";
	Seq.removeLast();
	Seq.print();

	//TESTE REMOVE
	std::cout << "\n## Teste remove():\t(indices iniciam no 0)\n";
	std::cout << "Seq 1:\n";
	std::cout << "Remover posicao 2:\t";
	Seq.remove(2);
	Seq.print();
	std::cout << "Remover posicao -1\t";
	Seq.remove(-1);
	Seq.print();
	std::cout << "Remover posicao 100\t";
	Seq.remove(100);
	Seq.print();

	//TESTE GETFIRST E GETLAST
	std::cout << "\n## Teste getFirst() e getLast:\n";
	std::cout << "Primeiro elemento: " << Seq.getFirst() << std::endl;
	std::cout << "Ultimo elemento: " << Seq.getLast() << std::endl;

	Seq.addFirst(4);
	Seq.addFirst(5);
	Seq.addFirst(6);
	std::cout << "\nNova sequencia:\n";
	Seq.print();

	//TESTE GET
	std::cout << "\n## Teste get():\n";
	std::cout << "Posicao 0: " << Seq.get(0) << std::endl;
	std::cout << "Posicao 3: " << Seq.get(3) << std::endl;

	//TESTE SEARCH
	std::cout << "\n## Teste search():\n";
	std::cout <<"Busca 5: ";
	if (Seq.search(5))
		std::cout <<"esta na sequencia\n";
	else
		std::cout << "nao esta na sequencia\n";
	
	std::cout << "Busca 400: ";
	if (Seq.search(400))
		std::cout <<"esta na sequencia\n";
	else
		std::cout << "nao esta na sequencia\n";

	//TESTE IS INCREASING
	std::cout << "\n## Teste isIncreasing():\n";
	if (Seq.isIncreasing())
		std::cout << "Seq Eh crescente\n";
	else
		std::cout << "Seq nao eh crescente\n";

	//TESTE IS DECREASING
	std::cout << "\n## Teste isDecreasing():\n";
	if (Seq.isDecreasing())
		std::cout << "Seq eh Decrescente\n";
	else
		std::cout << "Seq nao eh Decrescente\n";


	Seq.addFirst(8);
	Seq.addLast(50);
	Seq.add(-1, 4);
	std::cout << "\nNova sequencia de Teste:\n";
	Seq.print();

	//TESTE BOUNDS
	std::cout << "\n## Teste bounds():\n";
	int min, max;
	Seq.bounds(min, max);
	std::cout << "Valor minimo: " << min << std::endl;
	std::cout << "Valor maximo: " << max << std::endl;


/*	//TESTE CONSTRUTOR DE CÓPIA
	std::cout << "\n## Teste Construtor de Copia:\n";
	Sequence<int> Seq3(Seq);
	std::cout << "Seq 3:\t";
	Seq3.print();

/*	//TESTE OPERADOR
	std::cout << "\n## Teste Operador = :\n";
	Seq2 = Seq;
	std::cout << "Seq 2:\t";gmail
	Seq2.print();

	//TESTE REMOVEFIRST
	std::cout << "\n## Teste removeFirst():\n";
	std::cout << "Seq 3:\t";
	Seq.removeFirst();
	Seq.print();
*/	
/*	//TESTE ISEQUAL
	std::cout << "\n## Teste isEqual():\n";
	if (Seq.isEqual(Seq3))
		std::cout << "Seq1 = Seq3" << std::endl;
	else
		std::cout << "Seq1 != Seq3" << std::endl;


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
	std::cout << "## Stack:\n";
	while (!s.isEmpty()) {
		std::cout << s.pop() << " ";
	}
	std::cout << std::endl;

	// --- print queue
	std::cout << "\n## Queue:\n";
	while (!q.isEmpty()) {
		std::cout << q.dequeue() << " ";
	}
	std::cout << std::endl;

	// --- print deque
	std::cout << "\n## Deque:\n";
	while (!d.isEmpty()) {
		std::cout << d.popBack() << " ";
	}
	std::cout << std::endl;
	return 0;
*/
}