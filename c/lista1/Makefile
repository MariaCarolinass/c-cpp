# Variável para o nome do arquivo
NAME = $(file)

# Regra para compilar
bin/$(NAME): bin/ src/$(NAME).c
	gcc src/$(NAME).c -o bin/$(NAME) -lm

# Criar diretório bin se não existir
bin/:
	mkdir -p bin

# Regra principal para compilar e executar
run: bin/$(NAME)
	./bin/$(NAME)

# Limpeza dos arquivos compilados
.PHONY: clean
clean:
	rm -rf bin

