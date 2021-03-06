invalid_message_parameters
~~~~~~~~~~~~~~~~~~~~~~~~~~

**type**: ``array`` **default**: ``array()``

Lorsque vous d�finissez l'option ``invalid_message``, vous pourriez avoir besoin
d'inclure des variables dans la chaine de caract�res. Cela est possible en ajoutant
des param�tres � l'option, et en incluant les variables dans cette option::

    $builder->add('some_field', 'some_type', array(
        // ...
        'invalid_message'            => 'Le format est invalide, il doit contenir %num% lettres',
        'invalid_message_parameters' => array('%num%' => 6),
    ));