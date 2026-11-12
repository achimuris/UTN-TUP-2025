export class Calculadora {
  public sumar(a: number, b: number): number {
    return a + b;
  }

  public restar(a: number, b: number): number {
    return a - b;
  }

  public multiplicar(a: number, b: number): number {
    return a * b;
  }

  public dividir(a: number, b: number): number {
    if (b === 0) {
      throw new Error("No se puede dividir por cero");
    }
    return a / b;
  }
}