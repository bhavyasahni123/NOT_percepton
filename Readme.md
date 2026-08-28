# NOT Perceptron

C++ implementation of a single-neuron perceptron trained from scratch to learn the NOT logic gate.

## Method

- **Architecture:** 1:1
- **Activation:** Step function
- **Initial weight:** \(w=0\)
- **Initial bias:** \(b=0\)
- **Learning rate:** \(n=0.1\)
- **Learning rule:** Perceptron learning rule
- **Stopping criterion:** Zero classification errors

For each training sample:

$$
z = wx + b
$$

$$
\hat{y} =
\begin{cases}
1, & z \geq 0 \\
0, & z < 0
\end{cases}
$$

$$
e = y - \hat{y}
$$

The parameters are updated using:

$$
w \leftarrow w + \eta e x
$$

$$
b \leftarrow b + \eta e
$$

## Dataset

| Input \(x\) | Target |
|:---:|:---:|
| 0 | 1 |
| 1 | 0 |

## Results

The perceptron correctly learned the NOT logic gate.

| Input | Target | Prediction |
|:---:|---:|---:|
| 0 | 1 | 1 |
| 1 | 0 | 0 |

**Accuracy: 100%**

## Technologies

- C++
- STL `vector`
- Perceptron learning algorithm
