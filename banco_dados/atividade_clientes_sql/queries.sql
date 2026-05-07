CREATE TABLE clientes (
  id INT AUTO_INCREMENT PRIMARY KEY,
  nome VARCHAR(100) NOT NULL,
  email VARCHAR(100) NOT NULL UNIQUE,
  telefone VARCHAR(15),
  data_cadastro TIMESTAMP DEFAULT CURRENT_TIMESTAMP
);

/*=================================================================*/
INSERT INTO clientes (id, nome, email, telefone)
VALUES
(1, 'Maria Silva', 'maria.silva@email.com', '(81) 91234-5678'),
(2, 'João Pereira', 'joao.pereira@email.com', '(81) 98765-4321'),
(3, 'Ana Costa', 'ana.costa@email.com', '(81) 99876-5432'),
(4, 'Carlos Souza', 'carlos.souza@email.com', '(81) 94567-1234'),
(5, 'Fernanda Lima', 'fernanda.lima@email.com', '(81) 93456-7890');

/*=================================================================*/

/*Atualizações dos registros.*/
UPDATE clientes
SET 
nome = 'Lucas Henrique',
telefone = '(81) 94633-2932'
WHERE id = 1;

UPDATE clientes
SET 
nome = 'Amanda Marta',
telefone = '(81) 94429-8884'
WHERE id = 2;

UPDATE clientes
SET 
nome = 'Sabrina Calabria',
telefone = '(81) 92231-8772'
WHERE id = 3;

UPDATE clientes
SET 
nome = 'Matheus Guilherme',
telefone = '(81) 99939-4751'
WHERE id = 4;

/*=================================================================*/

/* serve para iniciar uma transição (conjuto de comandos q
vai ser tratado como uma operação única).

Ou seja, vai ficar pre-feito, esperando apenas a confirmação
final para assim entrar no dito cujo.*/
BEGIN TRANSACTION;  

UPDATE clientes
SET 
nome = 'Nayara Karla',
telefone = '(81) 92389-1243'
WHERE id = 5;

COMMIT; -- confirma as alterações feitas na transição.
/* ROLLBACK; */ -- isso aqui serviria para desfazer a transição.

/*=================================================================*/

DELETE FROM clientes WHERE id = 1;
DELETE FROM clientes WHERE id = 4;

SELECT * FROM clientes;


