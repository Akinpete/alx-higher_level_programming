$(document).ready(function() {
  $('#language_code').keypress(function(event) {
    if (event.keyCode === 13) {
      translateHello();
    }
  });

  $('#btn_translate').click(function() {
    translateHello();
  });

  function translateHello() {
    const langCode = $('#language_code').val();
    const apiUrl = `https://www.fourtonfish.com/hellosalut/hello/?lang=${langCode}`;
    
    $.get(apiUrl, function(data) {
      $('#hello').text(data.hello);
    }).fail(function() {
      $('#hello').text('Translation not available.');
    });
  }
});

