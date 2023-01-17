#!/usr/bin/env python

import matplotlib.pyplot as plt


word = "Jitter"
lista = []

lista2 = []

for i in range(1000):
    lista2.append(i)

with open('text.txt', 'r') as f:
    lines = f.readlines()

for line in lines:
    if word in line:
        parts = line.split()
        word_index = parts.index(word)
        try:
            perioda = int(parts[word_index + 1]) # [ns]
            jitter = perioda - 20000000 # sub 20 ms
            lista.append(jitter)
        except ValueError:
            pass
plt.xlabel('Jitter [ns]')
plt.ylabel('Frequency')
plt.style.use('ggplot')
plt.hist(lista, bins=72)

plt.show()
