$(document).ready(function() {
  $('#btn_translate').click(function() {
    const langCode = $('#language_code').val();
    if (langCode) {
      const apiUrl = `https://www.fourtonfish.com/hellosalut/hello/?lang=${langCode}`;
      $.get(apiUrl, function(data) {
        if (data && data.hello) {
          $('#hello').text(data.hello);
        } else {
          $('#hello').text('Translation not available.');
        }
      }).fail(function() {
        $('#hello').text('Translation not available.');
      });
    } else {
      $('#hello').text('Please enter a language code.');
    }
  });
});

