using Newtonsoft;
using Newtonsoft.Json;

namespace OOP_1
{

    public class Program
    {
        static void Main(string[] args)
        {
            FlightInformationSystem flightSystem = new FlightInformationSystem();

            flightSystem.LoadFlightsFromJson("flights_data.json");


            FlightRequestsProcessor flightRequestsProcessor = new FlightRequestsProcessor(flightSystem);


            // Використання процедур для обробки запитів

            flightRequestsProcessor.ProcessRequest1("Turkish Airlines");


            flightRequestsProcessor.ProcessRequest2(new DateTime(2023, 01, 27));

            flightRequestsProcessor.ProcessRequest3(new DateTime(2023, 01, 27), new DateTime(2023, 01, 27), "Odesa");

            flightRequestsProcessor.ProcessRequest4(new DateTime(2023, 01, 27), null, null);
        }
    }
}