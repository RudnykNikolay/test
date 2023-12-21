using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace OOP_1
{
    public class FlightRequestsProcessor
    {
        private FlightInformationSystem _flightSystem;

        public FlightRequestsProcessor(FlightInformationSystem flightSystem)
        {
            _flightSystem = flightSystem;
        }

        public void ProcessRequest1(string airlineCompany)
        {
            List<Flight> flights = _flightSystem.GetFlights(flight => flight.Airline == airlineCompany);

            foreach (var flight in flights)
            {
                Console.WriteLine($"{flight.FlightNumber} - {flight.Destination}");
            }
        }

        public void ProcessRequest2(DateTime departureDate)
        {
            List<Flight> flights = _flightSystem.GetFlights(flight => flight.DepartureTime.Date == departureDate.Date);

            foreach (var flight in flights)
            {
                Console.WriteLine($"{flight.FlightNumber} - {flight.DepartureTime}");
            }
        }

        public void ProcessRequest3(DateTime startDate, DateTime endDate, string destination)
        {
            List<Flight> flights = _flightSystem.GetFlights(flight => flight.DepartureTime.Date >= startDate.Date && flight.DepartureTime.Date <= endDate.Date && flight.Destination == destination);

            foreach (var flight in flights)
            {
                Console.WriteLine($"{flight.FlightNumber} - {flight.DepartureTime}");
            }
        }

        public void ProcessRequest4(DateTime lastHourDate, DateTime? startDate, DateTime? endDate)
        {
            List<Flight> flights = _flightSystem.GetFlights(flight => flight.DepartureTime.Date == lastHourDate.Date || (startDate != null && flight.DepartureTime.Date >= startDate.Value.Date && flight.DepartureTime.Date <= endDate.Value.Date));

            foreach (var flight in flights)
            {
                Console.WriteLine($"{flight.FlightNumber} - {flight.DepartureTime}");
            }
        }
    }
}
