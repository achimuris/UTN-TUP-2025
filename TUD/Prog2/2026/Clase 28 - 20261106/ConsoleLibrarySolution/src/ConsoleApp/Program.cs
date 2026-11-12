using MisClases.PD;

// /* Cadena de responsabilidades */
// double monto = 100000000;

// /*Estructura de aprobación de la cadena...*/

// Comercial aprobador1 = new Comercial();
// GerenteSucursal aprobador2 = new GerenteSucursal();
// aprobador1.Siguiente = aprobador2;

// GerenteRegional aprobador3 = new GerenteRegional();
// aprobador2.Siguiente = aprobador3;

// /*Fin de generación de la cadena de responsabilidad*/

// aprobador1.AtenderSolicitud(monto);
// /* Fin ejemplo de: Cadena de responsabilidades */
/*
Ana recibió por email: Se suspenden las clases del viernes
Luis recibió en la app: Se suspenden las clases del viernes
Ana recibió por email: Ya están las notas del parcial
*/

Alumno ana = new Alumno("Ana");
Alumno luis = new Alumno("Luis");

ana.FechaUltimaNovedad = DateTime.Now;

PorAPP listaAPP = new PorAPP();
ana.CanalDeNovedad = listaAPP;
listaAPP.Suscribir(ana);
luis.CanalDeNovedad = listaAPP;
listaAPP.Suscribir(luis);

listaAPP.Notificar("¡Lunes 9 de noviembre es feriado!");

