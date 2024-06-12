// Javascript script that fetches and lists the title with jQuery API
$.get('https://swapi-api.alx-tools.com/api/films/?format=json', function (data) {
	$.each(data.results, function (index, value) {
		 $('<li>' + value.title + '</li>').appendTo('UL#list_movies');
	});
});

// $(document).ready(function() {
      // URL to fetch the movies data
   //   const apiUrl = 'https://swapi-api.alx-tools.com/api/films/?format=json';

      // Fetch the data using jQuery's $.get method
     // $.get(apiUrl, function(data) {
        // Loop through the movies and append each title to the UL#list_movies
       // data.results.forEach(function(movie) {
         // $('#list_movies').append('<li>' + movie.title + '</li>');
       // });
     // });
   // });
