<!DOCTYPE html>
<html>
<head>
  <title>PURE Unobtrusive Rendering Engine</title>
  <script src="http://pure.github.io/pure/libs/pure.js"></script>
</head>
<body>

  <!-- HTML template -->
  <div>
    Hello <span></span>
  </div>


  <script>

    var data = {
      'who': 'BeeBole!'
    },
      directive = {
      'span': 'who' //look for the SPAN, set its text to the value of property 'who'
    };

    //render the template
    $p( 'div' ).render( data, directive );

  </script>
</body>
</html>