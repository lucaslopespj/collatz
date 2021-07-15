<h1>A Conjectura de Collatz</h1>

<p>
    A conjectura de Collatz é uma conjectura matemática que recebeu este nome em referência ao matemático alemão Lothar Collatz, que foi o primeiro a propô-la, em 1937. <br>Fonte: <a href="https://pt.wikipedia.org/wiki/Conjectura_de_Collatz">Wikipédia</a>
</p>

<p>
    Basicamente a conjectura diz:<br><br>
    <i>"Se um número for par, divida-o por 2; se um número for ímpar, multiplique-o por 3 e some 1. Ao fazer isso sucessivas vezes acabará convergindo para 1."</i>
</p>

<p>
    A palavra <strong>conjectura</strong>, segundo o dicionário online <a href="https://www.dicio.com.br/conjectura">Dicio</a>, significa:<br><br>
    <i>"Ação ou efeito de deduzir ou de fazer inferências, baseando-se em palpites, intuições, provas inconclusas ou suposições."</i><br><br>
    Ou seja, até hoje não existe uma prova formal matemática de que de fato <strong>qualquer número natural maior que zero</strong> convergirá de fato para 1 ou alguma existência empírica (prática) de algum número que ainda não tenha convergido para 1.
</p>

<h2>Sobre este repositório</h2>
<p>
    Neste repositório você encontra uma implementação da função Collatz que é chamada recursivamente até que o número tenha convergido para 1.
</p>

<p>
    O algoritmo imprime cada número da sequência e também conta quantos passos levou para o número convergir e em quantos passos atingiu seu pico de valor máximo.
</p>

<h2>Como usar o código</h2>
<p>
    Você pode compilar o código em C num terminal Linux com o seguinte comando:
    <br><br>
    <code>$ gcc collatz.c -o collatz -Wall -ansi -pedantic -O2</code>
    <br><br>
    Após o binário ser gerado basta executá-lo.
</p>

<h2>Exemplo</h2>
<p>
    Ao executar o código para o número 147 teremos o seguinte:
    <br><br>
    <pre>

        Informe um número inteiro: 147


        147 442 221 664 332 166 83 250 125 376 188 94 47 142 71 214 107
        322 161 484 242 121 364 182 91 274 137 412 206 103 310 155 466
        233 700 350 175 526 263 790 395 1186 593 1780 890 445 1336 668
        334 167 502 251 754 377 1132 566 283 850 425 1276 638 319 958 479
        1438 719 2158 1079 3238 1619 4858 2429 7288 3644 1822 911 2734
        1367 4102 2051 6154 3077 9232 4616 2308 1154 577 1732 866 433
        1300 650 325 976 488 244 122 61 184 92 46 23 70 35 106 53 160 80
        40 20 10 5 16 8 4 2 1 

        147 convergiu para 1 em 116 passos
        Maior número atingido: 9232 em 82 passos
</pre>
</p>

<h2>Limites para testes empíricos</h2>
<p>
    Como estamos usando <em>unsigned long int</em> temos um máximo de 32 bits (ou 4 bytes) para armazenar valores numéricos que vão de 0 até 4.294.967.295 (2<sup>32</sup>-1). Isso significa que você pode escolher qualquer número nessa faixa de valores para testar se ele converge para 1.
<p>