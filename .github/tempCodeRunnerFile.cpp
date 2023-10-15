ifstream archivoOraciones("Oraciones.txt"); //crea el archivo
    if (!archivoOraciones) {
        cout << "No se pudo abrir el archivo Oraciones.txt" << endl;
        return 1;
    }