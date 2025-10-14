/* Implemente um programa que receba um número inteiro n como entrada e retorne o n-ésimo número da sequência de Fibonacci. A sequência é 
definida da seguinte forma:</p>

 F(1) = 1 
 F(2) = 1 
 F(n) = F(n-1) + F(n-2), \quad \text{para } n > 2 

Não é necessário escrever o main.c, apenas o arquivo com a função int fibonacci(int n). Restrija a entrada a números entre 1 e 30. Se um 
inteiro menor ou igual a 0 ou maior que 30 for fornecido, a função deve retornar $-1$.

Exemplo: Se o parâmetro de entrada for n = 6, retorne 8 (1, 1, 2, 3, 5, 8) */

int fibonacci(int n){
	int f1 = 1, f2 = 1, x; // Declaração primeiro e segundo termo da sequencia e do n-ésimo termo (x)
	if (n < 1 || n > 30) return -1; //se n nao estiver entre 1 e 30, retornar -1
	if (n <= 2) return f2; //se n for menor ou igual a 2, retornar f2 (poderia ser f1 também, ambos nesse momento ainda equivalem a 1.
	for (int i = 3; i <= n; i++){ //realizar o bloco de operações abaixo equanto i for menor ou igual a n, i é cada iteração do laço. i começa a partir de 3 (pois os dois primeiros termos da sequencia já são definidos) e, a cada interção, aumenta seu valor em uma unidade.
		x = f1 + f2; //na primeira iteração, n-ésimo termo será equivalente a f1 + f2 (ambos termos anteriores). Já nas próximas x será equivalente à soma dos dois termos anteriores.
		f1 = f2; //valor de f1 é atualizado, fazendo com que ele assuma o valor do termo posterior a ele.
		f2 = x; // valor de f2 é atualizado, assumindo o valor do termo posterior a ele também, termo este que é a soma dos antigos valores de f1 e f2.
		// assim os valores vão "avançando" ao longo da sequência de fibonacci
	}
	return x; //retorno o valor do n-ésimo número da sequência
}