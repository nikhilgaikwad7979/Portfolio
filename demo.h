<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Image Gallery with Popup</title>
    <!-- Bootstrap CSS -->
    <link href="https://cdn.jsdelivr.net/npm/bootstrap@5.3.3/dist/css/bootstrap.min.css" rel="stylesheet">
    <style>
        .gallery img {
            width: auto; /* Keep the aspect ratio */
            height: 235px; /* Set height to 35px */
            cursor: pointer;
            border-radius: 8px;
            box-shadow: 0px 4px 6px rgba(0, 0, 0, 0.1);
        }
        .modal-dialog {
            max-width: 80%;
        }
    </style>
</head>
<body>

<div class="container mt-4">
    <h2 class="text-center mb-4">Image Gallery</h2>
    <div class="row gallery">
        <div class="col-md-4">
            <img src="./assets/images/calc.jpg" height="35px" alt="Image 1" class="img-fluid" data-bs-toggle="modal" data-bs-target="#imageModal" data-bs-image="./assets/images/calc.jpg">
        </div>
        <div class="col-md-4">
            <img src="./assets/images/calc.jpg" height="35px" alt="Image 2" class="img-fluid" data-bs-toggle="modal" data-bs-target="#imageModal" data-bs-image="https://via.placeholder.com/800x600">
        </div>
        <div class="col-md-4">
            <img src="./assets/images/calc.jpg" height="35px" alt="Image 3" class="img-fluid" data-bs-toggle="modal" data-bs-target="#imageModal" data-bs-image="https://via.placeholder.com/800x600">
        </div>
    </div>
</div>

<!-- Modal -->
<div class="modal fade" id="imageModal" tabindex="-1" aria-labelledby="imageModalLabel" aria-hidden="true">
    <div class="modal-dialog">
        <div class="modal-content">
            <div class="modal-body">
                <img id="modalImage" src="./assets/images/calc.jpg" alt="Large Image" class="img-fluid">
            </div>
        </div>
    </div>
</div>

<!-- Bootstrap JS (and Popper.js for modal functionality) -->
<script src="https://cdn.jsdelivr.net/npm/@popperjs/core@2.11.6/dist/umd/popper.min.js"></script>
<script src="https://cdn.jsdelivr.net/npm/bootstrap@5.3.3/dist/js/bootstrap.min.js"></script>

<script>
    // JavaScript to update the modal image based on the clicked image
    var modal = document.getElementById('imageModal');
    modal.addEventListener('show.bs.modal', function (event) {
        var button = event.relatedTarget; // The clicked image
        var imageUrl = button.getAttribute('data-bs-image'); // Get the data-bs-image attribute
        var modalImage = document.getElementById('modalImage');
        modalImage.src = imageUrl; // Set the src of the modal image to the clicked image's URL
    });
</script>

</body>
</html>
