Orador orador = new Orador(123, "Leonardo", "POO");
General unGeneral = new General(1234, "Un asistente general");
VIP unVIP = new VIP(987, "Un asistente VIP", "Un termo");

Evento elEvento = new Evento();
elEvento.Informacion = "Clase de POO";


elEvento.AgregarParticipante(orador);
elEvento.AgregarParticipante(unVIP);
elEvento.RegistrarCheckIn(orador);
elEvento.RegistrarCheckIn(unVIP);

System.Console.WriteLine(elEvento.InformarResumen());

double valor = Math.Pow(3, 3);



DateTime unaFechaInicio = DateTime.Now;

Console.WriteLine(unaFechaInicio);

Thread.Sleep(10000);
DateTime unaFechaFinal = DateTime.Now;

System.Console.WriteLine(unaFechaFinal);