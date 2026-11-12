// ---------- Nodo y Lista enlazada ----------
class Paciente {
  constructor(
    public codigo: number,
    public nombres: string,
    public apellido: string,
    public direccion: string,
    public telefono: string
  ) {}
}

class Nodo {
  constructor(public dato: Paciente, public sig: Nodo | null = null) {}
}

class ListaPacientes {
  private cab: Nodo | null = null;

  // a) Registrar al final
  registrar(p: Paciente): void {
    const nuevo = new Nodo(p);
    if (!this.cab) {
      this.cab = nuevo;
      return;
    }
    let act = this.cab;
    while (act.sig) act = act.sig;
    act.sig = nuevo;
  }

  // b) Eliminar por código (cualquier posición)
  eliminar(codigo: number): boolean {
    if (!this.cab) return false;
    if (this.cab.dato.codigo === codigo) {
      this.cab = this.cab.sig;
      return true;
    }
    let ant: Nodo = this.cab;
    let act: Nodo | null = this.cab.sig;
    while (act && act.dato.codigo !== codigo) {
      ant = act;
      act = act.sig;
    }
    if (act) {
      ant.sig = act.sig;
      return true;
    }
    return false;
  }

  // c) Actualizar cualquier campo (busca por código)
  actualizar(codigo: number, cambios: Partial<Omit<Paciente, "codigo">>): boolean {
    let act = this.cab;
    while (act && act.dato.codigo !== codigo) act = act.sig;
    if (!act) return false;
    Object.assign(act.dato, cambios);
    return true;
  }

  // d) Agregar nuevo paciente **después** de un código dado
  agregarDespues(codigoRef: number, p: Paciente): boolean {
    let act = this.cab;
    while (act && act.dato.codigo !== codigoRef) act = act.sig;
    if (!act) return false;
    act.sig = new Nodo(p, act.sig);
    return true;
  }

  // e) Mostrar listado completo
  mostrar(): void {
    let act = this.cab;
    if (!act) {
      console.log("Lista vacía");
      return;
    }
    while (act) {
      const pa = act.dato;
      console.log(
        `[${pa.codigo}] ${pa.apellido}, ${pa.nombres} - ${pa.direccion} - ${pa.telefono}`
      );
      act = act.sig;
    }
  }
}

// ---------- Menú de prueba ----------
const lista = new ListaPacientes();
function mostrarMenu(): void {
  console.log(`
1- Registrar paciente
2- Eliminar paciente
3- Actualizar paciente
4- Agregar después de seleccionado
5- Mostrar listado
0- Salir
`);
}
let op = -1;
while (op !== 0) {
  mostrarMenu();
  op = Number(prompt("Opción: "));
  switch (op) {
    case 1: {
      const cod = Number(prompt("Código:"));
      const nom = String(prompt("Nombres:"));
      const ape = String(prompt("Apellido:"));
      const dir = String(prompt("Dirección:"));
      const tel = String(prompt("Teléfono:"));
      lista.registrar(new Paciente(cod, nom, ape, dir, tel));
      break;
    }
    case 2: {
      const cod = Number(prompt("Código a eliminar:"));
      console.log(lista.eliminar(cod) ? "Eliminado" : "No encontrado");
      break;
    }
    case 3: {
      const cod = Number(prompt("Código a modificar:"));
      const campo = String("Campo (nombres|apellido|direccion|telefono):") as keyof Omit<Paciente, "codigo">;
      const valor = String("Nuevo valor:");
      console.log(lista.actualizar(cod, { [campo]: valor }) ? "Actualizado" : "No encontrado");
      break;
    }
    case 4: {
      const codRef = Number(prompt("Código de referencia (después de él se agrega):"));
      const cod = Number(prompt("Código nuevo:"));
      const nom = String(prompt("Nombres:"));
      const ape = String(prompt("Apellido:"));
      const dir = String(prompt("Dirección:"));
      const tel = String(prompt("Teléfono:"));
      console.log(
        lista.agregarDespues(codRef, new Paciente(cod, nom, ape, dir, tel))
          ? "Agregado"
          : "Código de referencia no encontrado"
      );
      break;
    }
    case 5:
      lista.mostrar();
      break;
    case 0:
      console.log("Fin del programa");
      break;
    default:
      console.log("Opción inválida");
  }
}