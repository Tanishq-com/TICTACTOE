document.addEventListener('DOMContentLoaded', function() {
    // Get all flip buttons
    const flipButtons = document.querySelectorAll('.flip-btn');
    
    // Add click event to each button
    flipButtons.forEach(button => {
        button.addEventListener('click', function() {
            // Find the closest parent card element
            const card = this.closest('.card');
            // Toggle the flipped class
            card.classList.toggle('flipped');
        });
    });
});