using Newtonsoft.Json;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace OOP_1
{
    public class FlightInformationSystem
    {
        private List<Flight> _flights;

        public FlightInformationSystem()
        {
            _flights = new List<Flight>();
        }

        public void AddFlight(Flight flight)
        {
            _flights.Add(flight);
        }

        public void RemoveFlight(Flight flight)
        {
            _flights.Remove(flight);
        }

        public Flight FindFlight(Predicate<Flight> predicate)
        {
            return _flights.Find(predicate);
        }

        public List<Flight> GetFlights(Predicate<Flight> predicate)
        {
            return _flights.FindAll(predicate);
        }

        public void LoadFlightsFromJson(string pathToJsonFile)

        {

            string json = File.ReadAllText(pathToJsonFile);

            RootObject rootObject = JsonConvert.DeserializeObject<RootObject>(json);


            foreach (var flight in rootObject.flights)

            {

                AddFlight(flight);

            }

        }
        private class RootObject

        {

            public List<Flight> flights { get; set; }

        }

        public void ProcessRequests()
        {
            // Реалізуйте процес обробки запитів до Інформаційної Системи польотів
        }
    }
}
